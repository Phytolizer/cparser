#pragma once

#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"

#include <string_view>

namespace cc {

class trivia final {
    syntax_kind m_kind;
    source_span m_span;
    std::string m_text;

  public:
    trivia(syntax_kind kind, source_span span, std::string&& text) noexcept;

    syntax_kind kind() const noexcept;
    source_span span() const noexcept;
    std::string_view text() const noexcept;
};

} // namespace cc
