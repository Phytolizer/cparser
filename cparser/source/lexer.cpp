#include "cparser/lexer.hpp"

#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <cctype>
#include <cstddef>
#include <iterator>
#include <optional>
#include <string>
#include <string_view>
#include <unordered_map>

using namespace std::string_view_literals;

cc::lexer::lexer(std::string&& source_text) noexcept : m_source_text(std::move(source_text)) {}

cc::lexer::iterator cc::lexer::begin() noexcept {
    return iterator{m_source_text.begin(), m_source_text.end(), &m_diagnostics};
}

cc::lexer::iterator cc::lexer::end() const noexcept {
    return iterator{};
}

std::span<const cc::diagnostic> cc::lexer::diagnostics() const noexcept {
    return m_diagnostics.diagnostics();
}

cc::token cc::lexer::iterator::scan_token() noexcept {
    if (m_is_end) {
        return {};
    }

    if (m_current >= m_end) {
        m_is_end = true;
        return {};
    }

    auto kind = syntax_kind::bad_token;
    m_token_start = m_current;
    m_reported_diagnostic = false;

    switch (*m_current) {
        case '[':
            kind = syntax_kind::left_bracket_token;
            advance();
            break;
        case ']':
            kind = syntax_kind::right_bracket_token;
            advance();
            break;
        case '(':
            kind = syntax_kind::left_parenthesis_token;
            advance();
            break;
        case ')':
            kind = syntax_kind::right_parenthesis_token;
            advance();
            break;
        case '.':
            if (look() == '.' && look(2) == '.') {
                kind = syntax_kind::ellipsis_token;
                advance(3);
            } else if (look() >= '0' && look() <= '9') {
                return scan_number();
            } else {
                kind = syntax_kind::period_token;
                advance();
            }
            break;
        case '-':
            if (look() == '>') {
                kind = syntax_kind::arrow_token;
                advance(2);
            } else if (look() == '-') {
                kind = syntax_kind::minus_minus_token;
                advance(2);
            } else if (look() == '=') {
                kind = syntax_kind::minus_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::minus_token;
                advance();
            }
            break;
        case '+':
            if (look() == '+') {
                kind = syntax_kind::plus_plus_token;
                advance(2);
            } else if (look() == '=') {
                kind = syntax_kind::plus_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::plus_token;
                advance();
            }
            break;
        case '&':
            if (look() == '&') {
                kind = syntax_kind::ampersand_ampersand_token;
                advance(2);
            } else if (look() == '=') {
                kind = syntax_kind::ampersand_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::ampersand_token;
                advance();
            }
            break;
        case '*':
            if (look() == '=') {
                kind = syntax_kind::asterisk_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::asterisk_token;
                advance();
            }
            break;
        case '~':
            kind = syntax_kind::tilde_token;
            advance();
            break;
        case '!':
            if (look() == '=') {
                kind = syntax_kind::exclamation_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::exclamation_token;
                advance();
            }
            break;
        case '/':
            if (look() == '=') {
                kind = syntax_kind::slash_equals_token;
                advance(2);
            } else if (look() == '*') {
                return scan_comment();
            } else {
                kind = syntax_kind::slash_token;
                advance();
            }
            break;
        case '%':
            if (look() == '=') {
                kind = syntax_kind::percent_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::percent_token;
                advance();
            }
            break;
        case '<':
            if (look() == '=') {
                kind = syntax_kind::left_equals_token;
                advance(2);
            } else if (look() == '<') {
                if (look(2) == '=') {
                    kind = syntax_kind::left_left_equals_token;
                    advance(3);
                } else {
                    kind = syntax_kind::left_left_token;
                    advance(2);
                }
            } else {
                kind = syntax_kind::left_token;
                advance();
            }
            break;
        case '>':
            if (look() == '=') {
                kind = syntax_kind::right_equals_token;
                advance(2);
            } else if (look() == '>') {
                if (look(2) == '=') {
                    kind = syntax_kind::right_right_equals_token;
                    advance(3);
                } else {
                    kind = syntax_kind::right_right_token;
                    advance(2);
                }
            } else {
                kind = syntax_kind::right_token;
                advance();
            }
            break;
        case '=':
            if (look() == '=') {
                kind = syntax_kind::equals_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::equals_token;
                advance();
            }
            break;
        case '^':
            if (look() == '=') {
                kind = syntax_kind::caret_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::caret_token;
                advance();
            }
            break;
        case '|':
            if (look() == '|') {
                kind = syntax_kind::pipe_pipe_token;
                advance(2);
            } else if (look() == '=') {
                kind = syntax_kind::pipe_equals_token;
                advance(2);
            } else {
                kind = syntax_kind::pipe_token;
                advance();
            }
            break;
        case '?':
            kind = syntax_kind::question_token;
            advance();
            break;
        case ':':
            kind = syntax_kind::colon_token;
            advance();
            break;
        case ',':
            kind = syntax_kind::comma_token;
            advance();
            break;
        case '#':
            if (look() == '#') {
                kind = syntax_kind::hash_hash_token;
                advance(2);
            } else {
                kind = syntax_kind::hash_token;
                advance();
            }
            break;
        case '{':
            kind = syntax_kind::left_brace_token;
            advance();
            break;
        case '}':
            kind = syntax_kind::right_brace_token;
            advance();
            break;
        case ';':
            kind = syntax_kind::semicolon_token;
            advance();
            break;
        case 'L':
            if (look() == '\'') {
                advance();
                return scan_character_literal();
            } else if (look() == '"') {
                advance();
                return scan_string_literal();
            } else {
                return scan_identifier();
            }
        case '\'':
            return scan_character_literal();
        case '"':
            return scan_string_literal();
        default:
            if (std::isspace(*m_current)) {
                while (std::isspace(*m_current)) {
                    advance();
                }

                kind = syntax_kind::whitespace_token;
            } else if (std::isdigit(*m_current)) {
                return scan_number();
            } else if (std::isalpha(*m_current) || *m_current == '_') {
                return scan_identifier();
            }
            break;
    }

    if (kind == syntax_kind::bad_token) {
        m_diagnostics->report_illegal_character(m_current - m_begin, current());
        m_reported_diagnostic = true;
        advance();
    }

    return token{
            kind,
            current_span(),
            std::string{current_text()},
    };
}

cc::token cc::lexer::iterator::scan_comment() noexcept {
    while (true) {
        if (current() == '*' && look() == '/') {
            advance(2);
            return token{
                    syntax_kind::comment_token,
                    current_span(),
                    std::string{current_text()},
            };
        }

        advance();
    }
}

cc::token cc::lexer::iterator::scan_identifier() noexcept {
    auto start = m_current;
    while (true) {
        if (!std::isalnum(current()) && current() != '_') {
            return token{
                    recognize_keyword(std::string_view{start, m_current}),
                    current_span(),
                    std::string{current_text()},
            };
        }

        advance();
    }
}

cc::token cc::lexer::iterator::scan_number() noexcept {
    auto kind = syntax_kind::decimal_constant_token;

    while (current() >= '0' && current() <= '9') {
        advance();
    }
    // try scan floating point
    if (current() == '.' || current() == 'e' || current() == 'E') {
        // success
        kind = syntax_kind::floating_constant_token;
        bool scanning_exponent = false;
        if (current() == 'e' || current() == 'E') {
            scanning_exponent = true;
            advance();
            if (current() == '+' || current() == '-') {
                advance();
            }
        } else {
            advance();
        }
        auto exponent_start = m_current;
        while (current() >= '0' && current() <= '9') {
            advance();
        }
        if (scanning_exponent && m_current == exponent_start) {
            m_diagnostics->report_empty_exponent(current_span());
            m_reported_diagnostic = true;
        }
        if (current() == 'e' || current() == 'E') {
            advance();
            if (current() == '+' || current() == '-') {
                advance();
            }
            auto exponent_start = m_current;
            while (current() >= '0' && current() <= '9') {
                advance();
            }
            if (m_current == exponent_start) {
                m_diagnostics->report_empty_exponent(current_span());
                m_reported_diagnostic = true;
            }
        }
        if (std::tolower(current()) == 'f' || std::tolower(current()) == 'F') {
            advance();
        }
    } else {
        // try scan integer
        m_current = m_token_start;

        if (current() == '0') {
            advance();
            if (current() == 'x' || current() == 'X') {
                kind = syntax_kind::hexadecimal_constant_token;
                advance();
                while (std::isxdigit(current())) {
                    advance();
                }
            } else {
                kind = syntax_kind::octal_constant_token;
                while (current() >= '0' && current() <= '7') {
                    advance();
                }
            }
        } else {
            while (std::isdigit(current())) {
                advance();
            }
        }

        bool is_long = false;
        bool is_unsigned = false;

        for (std::size_t i = 0; i < 2; i++) {
            if (!is_long && std::tolower(current()) == 'l') {
                advance();
                is_long = true;
            } else if (!is_unsigned && std::tolower(current()) == 'u') {
                advance();
                is_unsigned = true;
            } else {
                break;
            }
        }
    }

    return token{
            m_reported_diagnostic ? syntax_kind::bad_token : kind,
            current_span(),
            std::string{current_text()},
    };
}

void cc::lexer::iterator::scan_escape_sequence() noexcept {
    advance();
    switch (current()) {
        case '\'':
        case '"':
        case '?':
        case '\\':
        case 'a':
        case 'b':
        case 'f':
        case 'n':
        case 'r':
        case 't':
        case 'v':
            advance();
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
            advance();
            for (std::size_t i = 0; i < 2 && current() >= '0' && current() <= '7'; ++i) {
                advance();
            }
            break;
        case 'x':
            advance();
            if (!std::isxdigit(current())) {
                m_diagnostics->report_empty_hexadecimal_escape(m_current - m_begin - 1);
                m_reported_diagnostic = true;
            }
            while (std::isxdigit(current())) {
                advance();
            }
            break;
        default:
            m_diagnostics->report_illegal_escape(m_current - m_begin - 1, current());
            m_reported_diagnostic = true;
            advance();
            break;
    }
}

cc::token cc::lexer::iterator::scan_character_literal() noexcept {
    advance();

    if (current() == '\\') {
        scan_escape_sequence();
    } else if (current() == '\n' || current() == '\0') {
        m_diagnostics->report_unterminated_character_literal(current_span(), current_text());
        m_reported_diagnostic = true;
    } else {
        advance();
    }

    if (current() == '\'') {
        advance();
    } else {
        m_diagnostics->report_unterminated_character_literal(current_span(), current_text());
        m_reported_diagnostic = true;
    }

    return token{
            m_reported_diagnostic ? syntax_kind::bad_token : syntax_kind::character_constant_token,
            current_span(),
            std::string{current_text()},
    };
}

cc::token cc::lexer::iterator::scan_string_literal() noexcept {
    advance();

    while (true) {
        if (current() == '\\') {
            scan_escape_sequence();
        } else if (current() == '\n' || current() == '\0') {
            m_diagnostics->report_unterminated_string_literal(current_span(), current_text());
            m_reported_diagnostic = true;
            break;
        } else if (current() != '"') {
            advance();
        }

        if (current() == '"') {
            advance();
            break;
        }
    }

    return token{
            m_reported_diagnostic ? syntax_kind::bad_token : syntax_kind::string_literal_token,
            current_span(),
            std::string{current_text()},
    };
}

cc::syntax_kind cc::lexer::iterator::recognize_keyword(std::string_view text) const noexcept {
    static const std::unordered_map<std::string_view, syntax_kind> keywords = {
            {"auto"sv, syntax_kind::auto_token},
            {"double"sv, syntax_kind::double_token},
            {"int"sv, syntax_kind::int_token},
            {"struct"sv, syntax_kind::struct_token},
            {"break"sv, syntax_kind::break_token},
            {"else"sv, syntax_kind::else_token},
            {"long"sv, syntax_kind::long_token},
            {"switch"sv, syntax_kind::switch_token},
            {"case"sv, syntax_kind::case_token},
            {"enum"sv, syntax_kind::enum_token},
            {"register"sv, syntax_kind::register_token},
            {"typedef"sv, syntax_kind::typedef_token},
            {"char"sv, syntax_kind::char_token},
            {"extern"sv, syntax_kind::extern_token},
            {"return"sv, syntax_kind::return_token},
            {"union"sv, syntax_kind::union_token},
            {"const"sv, syntax_kind::const_token},
            {"float"sv, syntax_kind::float_token},
            {"short"sv, syntax_kind::short_token},
            {"unsigned"sv, syntax_kind::unsigned_token},
            {"continue"sv, syntax_kind::continue_token},
            {"for"sv, syntax_kind::for_token},
            {"signed"sv, syntax_kind::signed_token},
            {"void"sv, syntax_kind::void_token},
            {"default"sv, syntax_kind::default_token},
            {"goto"sv, syntax_kind::goto_token},
            {"sizeof"sv, syntax_kind::sizeof_token},
            {"volatile"sv, syntax_kind::volatile_token},
            {"do"sv, syntax_kind::do_token},
            {"if"sv, syntax_kind::if_token},
            {"static"sv, syntax_kind::static_token},
            {"while"sv, syntax_kind::while_token},
    };

    auto it = keywords.find(text);
    if (it != keywords.end()) {
        return it->second;
    }
    return syntax_kind::identifier_token;
}

char cc::lexer::iterator::look(std::ptrdiff_t offset) const noexcept {
    auto it = m_current + offset;
    if (it >= m_end) {
        return '\0';
    }

    return *it;
}

char cc::lexer::iterator::current() const noexcept {
    if (m_current == m_end) {
        return '\0';
    }
    return *m_current;
}

cc::source_span cc::lexer::iterator::current_span() const noexcept {
    return source_span{m_token_start - m_begin, m_current - m_begin};
}

std::string_view cc::lexer::iterator::current_text() const noexcept {
    return std::string_view{m_token_start, m_current};
}

cc::lexer::iterator::iterator(std::string::const_iterator begin, std::string::const_iterator end,
        diagnostic_bag* diagnostics) noexcept
    : m_begin(begin), m_current(begin), m_end(end), m_diagnostics(diagnostics),
      m_reported_diagnostic(false), m_is_end(false), m_just_scanned(scan_token()) {}

cc::lexer::iterator::iterator() : m_is_end(true) {}

bool cc::lexer::iterator::operator==(const iterator& other) const noexcept {
    if (m_is_end) {
        return other.m_is_end;
    }

    if (other.m_is_end) {
        return false;
    }

    return m_current == other.m_current;
}

cc::lexer::iterator& cc::lexer::iterator::operator++() noexcept {
    m_just_scanned = scan_token();
    return *this;
}

cc::lexer::iterator cc::lexer::iterator::operator++(int) noexcept {
    auto result = *this;
    ++*this;
    return result;
}

cc::token cc::lexer::iterator::operator*() const noexcept {
    return m_just_scanned;
}

const cc::token* cc::lexer::iterator::operator->() const noexcept {
    return &m_just_scanned;
}

void cc::lexer::iterator::advance(std::ptrdiff_t count) noexcept {
    m_current += count;
}
