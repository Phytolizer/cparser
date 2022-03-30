#pragma once

#include "fmt/core.h"

#include <cstddef>
#include <string>

namespace cc {

struct source_span final {
    std::ptrdiff_t begin;
    std::ptrdiff_t end;

    source_span() noexcept = default;
    constexpr source_span(std::ptrdiff_t begin, std::ptrdiff_t end) noexcept
        : begin(begin), end(end) {}
    static constexpr source_span with_length(std::ptrdiff_t begin, std::ptrdiff_t length) noexcept {
        return source_span{begin, begin + length};
    }
};

} // namespace cc

template <> struct fmt::formatter<cc::source_span> {
    template <typename ParseContext> constexpr auto parse(ParseContext& ctx) {
        return ctx.begin();
    }

    template <typename FormatContext> auto format(const cc::source_span& span, FormatContext& ctx) {
        return format_to(ctx.out(), "{}..{}", span.begin, span.end);
    }
};
