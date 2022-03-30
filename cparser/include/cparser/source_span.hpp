#pragma once

#include <cstddef>
#include <string>
namespace cpr {

struct source_span final {
    std::ptrdiff_t begin;
    std::ptrdiff_t end;

    source_span() noexcept = default;
    constexpr source_span(std::ptrdiff_t begin, std::ptrdiff_t end) noexcept
        : begin(begin), end(end) {}
};

} // namespace cpr
