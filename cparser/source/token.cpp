#include "cparser/token.hpp"

#include "magic_enum.hpp"

cc::token::token() noexcept : m_kind(syntax_kind::bad_token) {}

cc::token::token(syntax_kind kind, source_span span, std::string text) noexcept
    : m_kind(kind), span(span), text(std::move(text)) {}

cc::syntax_kind cc::token::kind() const noexcept {
    return m_kind;
}

std::vector<const cc::syntax_node*> cc::token::children() const noexcept {
    // Tokens are leaf nodes.
    return {};
}

std::ostream& cc::operator<<(std::ostream& os, const token& tok) {
    return os << magic_enum::enum_name(tok.m_kind) << " '" << tok.text << '\'';
}
