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

cpr::lexer::lexer(std::string&& source_text) noexcept : m_source_text(std::move(source_text)) {}

cpr::lexer::iterator cpr::lexer::begin() const noexcept {
    return iterator{m_source_text.begin(), m_source_text.end()};
}

cpr::lexer::iterator cpr::lexer::end() const noexcept {
    return iterator{};
}

cpr::token cpr::lexer::iterator::scan_token() noexcept {
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
            m_current += 1;
            break;
        case ']':
            kind = syntax_kind::right_bracket_token;
            m_current += 1;
            break;
        case '(':
            kind = syntax_kind::left_parenthesis_token;
            m_current += 1;
            break;
        case ')':
            kind = syntax_kind::right_parenthesis_token;
            m_current += 1;
            break;
        case '.':
            if (look() != m_end && look(2) != m_end && *look() == '.' && *look(2) == '.') {
                kind = syntax_kind::ellipsis_token;
                m_current += 3;
            } else {
                kind = syntax_kind::period_token;
                m_current += 1;
            }
            break;
        case '-':
            if (look() != m_end && *look() == '>') {
                kind = syntax_kind::arrow_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '-') {
                kind = syntax_kind::minus_minus_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '=') {
                kind = syntax_kind::minus_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::minus_token;
                m_current += 1;
            }
            break;
        case '+':
            if (look() != m_end && *look() == '+') {
                kind = syntax_kind::plus_plus_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '=') {
                kind = syntax_kind::plus_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::plus_token;
                m_current += 1;
            }
            break;
        case '&':
            if (look() != m_end && *look() == '&') {
                kind = syntax_kind::ampersand_ampersand_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '=') {
                kind = syntax_kind::ampersand_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::ampersand_token;
                m_current += 1;
            }
            break;
        case '*':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::asterisk_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::asterisk_token;
                m_current += 1;
            }
            break;
        case '~':
            kind = syntax_kind::tilde_token;
            m_current += 1;
            break;
        case '!':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::exclamation_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::exclamation_token;
                m_current += 1;
            }
            break;
        case '/':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::slash_equals_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '*') {
                return scan_comment();
            } else {
                kind = syntax_kind::slash_token;
                m_current += 1;
            }
            break;
        case '%':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::percent_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::percent_token;
                m_current += 1;
            }
            break;
        case '<':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::left_equals_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '<') {
                if (look(2) != m_end && *look(2) == '=') {
                    kind = syntax_kind::left_left_equals_token;
                    m_current += 3;
                } else {
                    kind = syntax_kind::left_left_token;
                    m_current += 2;
                }
            } else {
                kind = syntax_kind::left_token;
                m_current += 1;
            }
            break;
        case '>':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::right_equals_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '>') {
                if (look(2) != m_end && *look(2) == '=') {
                    kind = syntax_kind::right_right_equals_token;
                    m_current += 3;
                } else {
                    kind = syntax_kind::right_right_token;
                    m_current += 2;
                }
            } else {
                kind = syntax_kind::right_token;
                m_current += 1;
            }
            break;
        case '=':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::equals_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::equals_token;
                m_current += 1;
            }
            break;
        case '^':
            if (look() != m_end && *look() == '=') {
                kind = syntax_kind::caret_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::caret_token;
                m_current += 1;
            }
            break;
        case '|':
            if (look() != m_end && *look() == '|') {
                kind = syntax_kind::pipe_pipe_token;
                m_current += 2;
            } else if (look() != m_end && *look() == '=') {
                kind = syntax_kind::pipe_equals_token;
                m_current += 2;
            } else {
                kind = syntax_kind::pipe_token;
                m_current += 1;
            }
            break;
        case '?':
            kind = syntax_kind::question_token;
            m_current += 1;
            break;
        case ':':
            kind = syntax_kind::colon_token;
            m_current += 1;
            break;
        case ',':
            kind = syntax_kind::comma_token;
            m_current += 1;
            break;
        case '#':
            if (look() != m_end && *look() == '#') {
                kind = syntax_kind::hash_hash_token;
                m_current += 2;
            } else {
                kind = syntax_kind::hash_token;
                m_current += 1;
            }
            break;
        case '{':
            kind = syntax_kind::left_brace_token;
            m_current += 1;
            break;
        case '}':
            kind = syntax_kind::right_brace_token;
            m_current += 1;
            break;
        case ';':
            kind = syntax_kind::semicolon_token;
            m_current += 1;
            break;
        default:
            if (std::isspace(*m_current)) {
                while (std::isspace(*m_current)) {
                    m_current += 1;
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
        m_current += 1;
    }

    return token{
            kind,
            source_span{start - m_begin, m_current - m_begin},
            std::string{start, m_current},
    };
}

cpr::token cpr::lexer::iterator::scan_comment() noexcept {
    auto start = m_current;
    while (true) {
        if (m_current == m_end || (*m_current == '*' && look() != m_end && *look() == '/')) {
            m_current += 2;
            return token{
                    syntax_kind::comment_token,
                    source_span{start - m_begin, m_current - m_begin},
                    std::string{start, m_current},
            };
        }

        m_current += 1;
    }
}

cpr::token cpr::lexer::iterator::scan_identifier() noexcept {
    auto start = m_current;
    while (true) {
        if (m_current == m_end || (!std::isalnum(*m_current) && *m_current != '_')) {
            return token{
                    recognize_keyword(std::string_view{start, m_current}),
                    source_span{start - m_begin, m_current - m_begin},
                    std::string{start, m_current},
            };
        }

        m_current += 1;
    }
}

cpr::token cpr::lexer::iterator::scan_number() noexcept {
    // TODO(kyle): no FP number support here
    auto start = m_current;
    while (true) {
        if (m_current == m_end || !std::isdigit(*m_current)) {
            return token{
                    syntax_kind::integer_constant_token,
                    source_span{start - m_begin, m_current - m_begin},
                    std::string{start, m_current},
            };
        }

        m_current += 1;
    }
}

cpr::syntax_kind cpr::lexer::iterator::recognize_keyword(std::string_view text) const noexcept {
    static const std::unordered_map<std::string_view, syntax_kind> keywords = {
            {"auto", syntax_kind::auto_token},
            {"double", syntax_kind::double_token},
            {"int", syntax_kind::int_token},
            {"struct", syntax_kind::struct_token},
            {"break", syntax_kind::break_token},
            {"else", syntax_kind::else_token},
            {"long", syntax_kind::long_token},
            {"switch", syntax_kind::switch_token},
            {"case", syntax_kind::case_token},
            {"enum", syntax_kind::enum_token},
            {"register", syntax_kind::register_token},
            {"typedef", syntax_kind::typedef_token},
            {"char", syntax_kind::char_token},
            {"extern", syntax_kind::extern_token},
            {"return", syntax_kind::return_token},
            {"union", syntax_kind::union_token},
            {"const", syntax_kind::const_token},
            {"float", syntax_kind::float_token},
            {"short", syntax_kind::short_token},
            {"unsigned", syntax_kind::unsigned_token},
            {"continue", syntax_kind::continue_token},
            {"for", syntax_kind::for_token},
            {"signed", syntax_kind::signed_token},
            {"void", syntax_kind::void_token},
            {"default", syntax_kind::default_token},
            {"goto", syntax_kind::goto_token},
            {"sizeof", syntax_kind::sizeof_token},
            {"volatile", syntax_kind::volatile_token},
            {"do", syntax_kind::do_token},
            {"if", syntax_kind::if_token},
            {"static", syntax_kind::static_token},
            {"while", syntax_kind::while_token},
    };

    auto it = keywords.find(text);
    if (it != keywords.end()) {
        return it->second;
    }
    return syntax_kind::identifier_token;
}

std::string::const_iterator cpr::lexer::iterator::look(std::ptrdiff_t offset) const noexcept {
    return m_current + offset;
}

cpr::lexer::iterator::iterator(
        std::string::const_iterator begin, std::string::const_iterator end) noexcept
    : m_begin(begin), m_current(begin), m_end(end), m_is_end(false), m_just_scanned(scan_token()) {}

cpr::lexer::iterator::iterator() : m_is_end(true) {}

bool cpr::lexer::iterator::operator==(const iterator& other) const noexcept {
    if (m_is_end) {
        return other.m_is_end;
    }

    if (other.m_is_end) {
        return false;
    }

    return m_current == other.m_current;
}

cpr::lexer::iterator& cpr::lexer::iterator::operator++() noexcept {
    m_just_scanned = scan_token();
    return *this;
}

cpr::lexer::iterator cpr::lexer::iterator::operator++(int) noexcept {
    auto result = *this;
    ++*this;
    return result;
}

cpr::token cpr::lexer::iterator::operator*() const noexcept {
    return m_just_scanned;
}
