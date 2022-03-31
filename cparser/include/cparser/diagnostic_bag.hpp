#pragma once

#include "cparser/diagnostic.hpp"
#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "magic_enum.hpp"

#include <cstddef>
#include <optional>
#include <span>
#include <sstream>
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
    void report_unexpected_token(source_span span, std::optional<std::string_view> description,
            syntax_kind actual, Ks... expected) noexcept {
        std::vector<syntax_kind> expected_kinds = collect_kinds(expected...);
        std::ostringstream expected_kinds_stream;
        if (description) {
            expected_kinds_stream << *description;
        } else {
            for (std::size_t i = 0; auto kind : expected_kinds) {
                if (i == 0) {
                    expected_kinds_stream << "<";
                } else {
                    expected_kinds_stream << "> or <";
                }
                expected_kinds_stream << magic_enum::enum_name(kind);
                ++i;
            }
            expected_kinds_stream << ">";
        }
        report(span,
                fmt::format("Unexpected token: <{}>, expected: {}", actual,
                        expected_kinds_stream.str()));
    }
};

} // namespace cc
