#pragma once

#include "cparser/diagnostic.hpp"
#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"

#include <cstddef>
#include <span>
#include <string_view>
#include <type_traits>
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

    void add_all(std::span<const diagnostic> diagnostics) noexcept;

    template <std::same_as<syntax_kind>... Ks>
    std::vector<syntax_kind> collect_kinds(Ks... kinds) noexcept {
        std::vector<syntax_kind> result;
        (result.push_back(kinds), ...);
        return result;
    }

    template <std::same_as<syntax_kind>... Ks>
    void report_unexpected_token(source_span span, syntax_kind actual, Ks... expected) noexcept {
        std::vector<syntax_kind> expected_kinds = collect_kinds(expected...);
        std::string expected_kinds_str;
        for (auto kind : expected_kinds) {
            if (!expected_kinds_str.empty()) {
                expected_kinds_str += "> or <";
            } else {
                expected_kinds_str += "<";
            }
            expected_kinds_str += fmt::format("'{}'", kind);
        }
        expected_kinds_str += ">";
        report(span,
                fmt::format("Unexpected token: <{}>, expected: {}", actual, expected_kinds_str));
    }
};

} // namespace cc
