#pragma once

#include "source_span.hpp"
#include "syntax_kind.hpp"

#include <string>

namespace cpr {

struct token final {
    syntax_kind kind;
    source_span span;
    std::string text;

    token() noexcept;
    token(syntax_kind kind, source_span span, std::string text) noexcept;
};

} // namespace cpr
