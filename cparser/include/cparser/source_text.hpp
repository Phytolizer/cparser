#pragma once

#include "cparser/source_span.hpp"
#include "cparser/text_line.hpp"

#include <cstddef>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace cc {

class source_text final {
    std::string m_text;
    std::vector<text_line> m_lines;

    std::vector<text_line> parse_lines() noexcept;

  public:
    explicit source_text(std::string&& text) noexcept;

    std::size_t get_line_index(std::ptrdiff_t offset) const noexcept;

    std::span<const text_line> lines() const noexcept;
    std::string_view operator[](text_line line) const noexcept;
    std::string_view operator[](source_span span) const noexcept;

    std::string::const_iterator begin() const noexcept;
    std::string::const_iterator end() const noexcept;
};

} // namespace cc
