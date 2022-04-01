#pragma once

#include "cparser/source_span.hpp"

#include <cstddef>

namespace cc {

struct text_line final {
    std::ptrdiff_t begin;
    std::ptrdiff_t length;
    std::ptrdiff_t length_including_line_break;

    constexpr text_line(std::ptrdiff_t begin, std::ptrdiff_t length,
            std::ptrdiff_t length_including_line_break) noexcept
        : begin(begin), length(length), length_including_line_break(length_including_line_break) {}

    constexpr std::ptrdiff_t end() const noexcept {
        return begin + length;
    }

    constexpr std::ptrdiff_t end_including_line_break() const noexcept {
        return begin + length_including_line_break;
    }

    constexpr source_span span() const noexcept {
        return source_span::with_length(begin, length);
    }

    constexpr source_span span_including_line_break() const noexcept {
        return source_span::with_length(begin, length_including_line_break);
    }
};

} // namespace cc
