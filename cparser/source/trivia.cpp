#include "cparser/trivia.hpp"

cc::trivia::trivia(syntax_kind kind, source_span span, std::string&& text) noexcept
    : m_kind(kind), m_span(span), m_text(std::move(text)) {}

cc::syntax_kind cc::trivia::kind() const noexcept {
    return m_kind;
}

cc::source_span cc::trivia::span() const noexcept {
    return m_span;
}

std::string_view cc::trivia::text() const noexcept {
    return m_text;
}
