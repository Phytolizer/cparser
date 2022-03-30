#pragma once

#include "source_span.hpp"
#include "syntax_kind.hpp"

#include <ostream>
#include <string>

namespace cc {

struct token final {
    syntax_kind kind;
    source_span span;
    std::string text;

    token() noexcept;
    token(syntax_kind kind, source_span span, std::string text) noexcept;

    friend std::ostream& operator<<(std::ostream& os, const token& tok);
};

} // namespace cc
