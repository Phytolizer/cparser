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

    if (m_current == m_end) {
        m_is_end = true;
        return {};
    }

    auto kind = syntax_kind::bad_token;
    auto start = m_current;

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
        case '\'':
            return scan_character_literal();
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
        advance();
    }

    return token{
            kind,
            source_span{start - m_begin, m_current - m_begin},
            std::string{start, m_current},
    };
}

cc::token cc::lexer::iterator::scan_comment() noexcept {
    auto start = m_current;
    while (true) {
        if (current() == '*' && look() == '/') {
            advance(2);
            return token{
                    syntax_kind::comment_token,
                    source_span{start - m_begin, m_current - m_begin},
                    std::string{start, m_current},
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
                    source_span{start - m_begin, m_current - m_begin},
                    std::string{start, m_current},
            };
        }

        advance();
    }
}

cc::token cc::lexer::iterator::scan_number() noexcept {
    // TODO(kyle): no FP number support here
    auto start = m_current;
    auto kind = syntax_kind::decimal_constant_token;

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

    return token{
            kind,
            source_span{start - m_begin, m_current - m_begin},
            std::string{start, m_current},
    };
}

cc::token cc::lexer::iterator::scan_character_literal() noexcept {
    auto start = m_current;
    advance();

    if (current() == '\\') {
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
                advance();
                for (std::size_t i = 0; i < 2 && current() >= '0' && current() <= '7'; ++i) {
                    advance();
                }
                break;
            case 'x':
                advance();
                while (std::isxdigit(current())) {
                    advance();
                }
                break;
            default:
                m_diagnostics->report_illegal_escape(m_current - m_begin - 1, current());
                advance();
                break;
        }
    } else {
        advance();
    }

    if (current() == '\'') {
        advance();
    } else {
        m_diagnostics->report_unterminated_character_literal(
                {start - m_begin, m_current - m_begin}, std::string_view{start, m_current});
    }

    return token{
            syntax_kind::character_constant_token,
            source_span{start - m_begin, m_current - m_begin},
            std::string{start, m_current},
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

cc::lexer::iterator::iterator(std::string::const_iterator begin, std::string::const_iterator end,
        diagnostic_bag* diagnostics) noexcept
    : m_begin(begin), m_current(begin), m_end(end), m_diagnostics(diagnostics), m_is_end(false),
      m_just_scanned(scan_token()) {}

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

void cc::lexer::iterator::advance(std::ptrdiff_t count) noexcept {
    m_current += count;
}
