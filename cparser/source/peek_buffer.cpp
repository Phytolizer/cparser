#include "cparser/peek_buffer.hpp"

#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"

cc::peek_buffer::peek_buffer(lexer& lex) noexcept : m_iter(lex.begin()), m_end(lex.end()) {}

const cc::token& cc::peek_buffer::peek(std::size_t offset) noexcept {
    while (m_buffer.size() <= offset) {
        if (m_iter == m_end) {
            m_buffer.emplace_back(syntax_kind::eof_token,
                    source_span::with_length(m_last.span.end, 0), "", std::vector<trivia>{},
                    std::vector<trivia>{});
        } else {
            m_buffer.emplace_back(*m_iter);
            ++m_iter;
        }
    }

    return m_buffer[offset];
}

cc::token cc::peek_buffer::advance() noexcept {
    auto tok = peek();
    m_buffer.pop_front();
    m_last = tok;
    return tok;
}
