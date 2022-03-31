#include "cparser/diagnostic_bag.hpp"

#include "cparser/diagnostic.hpp"
#include "cparser/source_span.hpp"
#include "fmt/core.h"

#include <algorithm>
#include <cstddef>
#include <ranges>
#include <span>
#include <string>
#include <string_view>

void cc::diagnostic_bag::report(source_span span, std::string&& message) noexcept {
    m_diagnostics.emplace_back(diagnostic{span, std::move(message)});
}

void cc::diagnostic_bag::report_unterminated_character_literal(
        source_span span, std::string_view text) noexcept {
    report(span, fmt::format("Character literal is unterminated: '{}'", text));
}

void cc::diagnostic_bag::report_unterminated_string_literal(
        source_span span, std::string_view text) noexcept {
    report(span, fmt::format("String literal is unterminated: '{}'", text));
}

void cc::diagnostic_bag::report_illegal_character(std::ptrdiff_t index, char character) noexcept {
    report(source_span::with_length(index, 1), fmt::format("Illegal character: '{}'", character));
}

void cc::diagnostic_bag::report_illegal_escape(std::ptrdiff_t index, char character) noexcept {
    report(source_span::with_length(index, 2),
            fmt::format("Illegal escape sequence: '\\{}'", character));
}

void cc::diagnostic_bag::report_empty_hexadecimal_escape(std::ptrdiff_t index) noexcept {
    report(source_span::with_length(index, 2), "Empty hexadecimal escape");
}

void cc::diagnostic_bag::report_no_maidens(source_span span) noexcept {
    report(span, "No maidens?");
}

std::span<const cc::diagnostic> cc::diagnostic_bag::diagnostics() const noexcept {
    return m_diagnostics;
}

void cc::diagnostic_bag::add_all(std::span<const diagnostic> diagnostics) noexcept {
    std::ranges::copy(diagnostics, std::back_inserter(m_diagnostics));
}
