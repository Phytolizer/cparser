#pragma once

#include "cparser/lexer.hpp"
#include "cparser/token.hpp"

#include <cstddef>
#include <deque>
#include <span>

namespace cc {

class peek_buffer final {
    lexer m_lexer;
    lexer::iterator m_iter;
    std::deque<token> m_buffer;
    token m_last;

  public:
    explicit peek_buffer(std::string&& source_text) noexcept;

    const token& peek(std::size_t offset = 0) noexcept;
    token advance() noexcept;

    std::span<const diagnostic> diagnostics() const noexcept;
};

} // namespace cc
