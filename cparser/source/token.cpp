#include "cparser/token.hpp"

#include "magic_enum.hpp"

cc::token::token() noexcept : m_kind(syntax_kind::bad_token) {}

cc::token::token(syntax_kind kind, source_span span, std::string text,
        std::vector<trivia>&& leading_trivia, std::vector<trivia>&& trailing_trivia) noexcept
    : m_kind(kind), span(span), text(std::move(text)), leading_trivia(std::move(leading_trivia)),
      trailing_trivia(std::move(trailing_trivia)) {}

cc::syntax_kind cc::token::kind() const noexcept {
    return m_kind;
}

std::vector<const cc::syntax_node*> cc::token::children() const noexcept {
    // Tokens are leaf nodes.
    return {};
}

std::ostream& operator<<(std::ostream& os, const cc::token& tok) {
    return os << magic_enum::enum_name(tok.kind()) << " '" << tok.text << '\'';
}
