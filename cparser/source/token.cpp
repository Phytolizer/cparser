#include "cparser/token.hpp"

#include "magic_enum.hpp"

cc::token::token() noexcept : kind(syntax_kind::bad_token) {}

cc::token::token(syntax_kind kind, source_span span, std::string text) noexcept
    : kind(kind), span(span), text(std::move(text)) {}

std::ostream& cc::operator<<(std::ostream& os, const token& tok) {
    return os << magic_enum::enum_name(tok.kind) << " '" << tok.text << '\'';
}
