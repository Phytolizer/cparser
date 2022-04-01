#pragma once

#include "cparser/lexer.hpp"
#include "cparser/token.hpp"

#include <cstddef>
#include <deque>
#include <span>

namespace cc {

class peek_buffer final {
    lexer::iterator m_iter;
    lexer::iterator m_end;
    std::deque<token> m_buffer;
    token m_last;

  public:
    explicit peek_buffer(lexer& lex) noexcept;

    const token& peek(std::size_t offset = 0) noexcept;
    token advance() noexcept;
};

} // namespace cc
