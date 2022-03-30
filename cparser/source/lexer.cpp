#include "cparser/lexer.hpp"

#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <cstddef>
#include <iterator>
#include <optional>
#include <string>

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
    std::optional<std::string> text;

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
                scan_comment();
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

void cpr::lexer::iterator::scan_comment() noexcept {
    while (true) {
        if (m_current == m_end) {
            return;
        }

        if (*m_current == '*' && look() != m_end && *look() == '/') {
            m_current += 2;
            return;
        }

        m_current += 1;
    }
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
