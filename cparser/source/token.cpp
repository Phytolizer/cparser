#include "cparser/token.hpp"

cpr::token::token() noexcept : kind(syntax_kind::bad_token) {}

cpr::token::token(syntax_kind kind, source_span span, std::string text) noexcept
    : kind(kind), span(span), text(std::move(text)) {}
