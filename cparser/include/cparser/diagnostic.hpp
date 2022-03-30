#pragma once

#include "cparser/source_span.hpp"
#include "fmt/core.h"

#include <string>

namespace cc {

struct diagnostic final {
    source_span span;
    std::string message;

  private:
    friend class diagnostic_bag;
    diagnostic(source_span span, std::string&& message) noexcept;
};

} // namespace cc

template <> struct fmt::formatter<cc::diagnostic> {
    template <typename ParseContext> constexpr auto parse(ParseContext& ctx) {
        return ctx.begin();
    }

    template <typename FormatContext> auto format(const cc::diagnostic& diag, FormatContext& ctx) {
        return format_to(ctx.out(), "{}", diag.message);
    }
};
