#pragma once

#include "cparser/diagnostic.hpp"

#include <cstddef>
#include <span>
#include <string_view>
#include <vector>

namespace cc {

class diagnostic_bag final {
    std::vector<diagnostic> m_diagnostics;

    void report(source_span span, std::string&& message) noexcept;

  public:
    diagnostic_bag() = default;

    void report_unterminated_character_literal(source_span span, std::string_view text) noexcept;
    void report_unterminated_string_literal(source_span span, std::string_view text) noexcept;
    void report_illegal_character(std::ptrdiff_t index, char character) noexcept;
    void report_illegal_escape(std::ptrdiff_t index, char character) noexcept;
    void report_empty_hexadecimal_escape(std::ptrdiff_t index) noexcept;

    std::span<const diagnostic> diagnostics() const noexcept;
};

} // namespace cc
