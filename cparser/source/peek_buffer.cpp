#include "cparser/peek_buffer.hpp"

cc::peek_buffer::peek_buffer(std::string&& source_text) noexcept
    : m_lexer(std::move(source_text)), m_iter(m_lexer.begin()) {}

const cc::token& cc::peek_buffer::peek(std::size_t offset) noexcept {
    while (m_buffer.size() <= offset) {
        m_buffer.emplace_back(*m_iter);
        ++m_iter;
    }

    return m_buffer[offset];
}

cc::token cc::peek_buffer::advance() noexcept {
    auto tok = peek();
    m_buffer.pop_front();
    return tok;
}

std::span<const cc::diagnostic> cc::peek_buffer::diagnostics() const noexcept {
    return m_lexer.diagnostics();
}
