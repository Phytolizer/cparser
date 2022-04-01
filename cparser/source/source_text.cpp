#include "cparser/source_text.hpp"

#include <cstddef>

std::vector<cc::text_line> cc::source_text::parse_lines() noexcept {
    std::vector<text_line> lines;

    std::ptrdiff_t line_start = 0;
    std::ptrdiff_t position = 0;

    while (position < static_cast<std::ptrdiff_t>(m_text.size())) {
        char curr = m_text[position];
        char look = '\0';
        if (position + 1 < static_cast<std::ptrdiff_t>(m_text.size())) {
            look = m_text[position + 1];
        }

        std::ptrdiff_t line_break_width = 0;
        if (curr == '\r' && look == '\n') {
            line_break_width = 2;
        } else if (curr == '\r' || curr == '\n') {
            line_break_width = 1;
        }

        if (line_break_width != 0) {
            auto length = position - line_start;
            auto length_including_line_break = length + line_break_width;
            lines.emplace_back(line_start, length, length_including_line_break);
            position += line_break_width;
            line_start = position;
        } else {
            position += 1;
        }
    }

    auto length = position - line_start;
    lines.emplace_back(line_start, length, length);

    return lines;
}

cc::source_text::source_text(std::string&& text) noexcept
    : m_text(std::move(text)), m_lines(parse_lines()) {}

std::size_t cc::source_text::get_line_index(std::ptrdiff_t offset) const noexcept {
    std::size_t lower = 0;
    std::size_t upper = m_lines.size() - 1;

    while (lower <= upper) {
        auto index = lower + (upper - lower) / 2;
        auto start = m_lines[index].begin;

        if (offset == start) {
            return index;
        }

        if (start > offset) {
            upper = index - 1;
        } else {
            lower = index + 1;
        }
    }

    return lower - 1;
}

std::span<const cc::text_line> cc::source_text::lines() const noexcept {
    return m_lines;
}

std::string_view cc::source_text::operator[](text_line line) const noexcept {
    return std::string_view{m_text.begin() + line.begin, m_text.begin() + line.end()};
}

std::string::const_iterator cc::source_text::begin() const noexcept {
    return m_text.begin();
}

std::string::const_iterator cc::source_text::end() const noexcept {
    return m_text.end();
}
