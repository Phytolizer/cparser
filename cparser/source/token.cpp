#include "cparser/token.hpp"

#include "magic_enum.hpp"

cpr::token::token() noexcept : kind(syntax_kind::bad_token) {}

cpr::token::token(syntax_kind kind, source_span span, std::string text) noexcept
    : kind(kind), span(span), text(std::move(text)) {}

std::ostream& cpr::operator<<(std::ostream& os, const token& tok) {
    return os << magic_enum::enum_name(tok.kind) << " '" << tok.text << '\'';
}
