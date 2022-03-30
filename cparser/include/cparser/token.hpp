#pragma once

#include "fmt/core.h"
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

template <> struct fmt::formatter<cc::token> {
    template <typename ParseContext> constexpr auto parse(ParseContext& ctx) {
        return ctx.begin();
    }

    template <typename FormatContext> auto format(const cc::token& tok, FormatContext& ctx) {
        return format_to(ctx.out(), "{} '{}'", tok.kind, tok.text);
    }
};
