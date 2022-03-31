#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/ast/statement.hpp"
#include "cparser/diagnostic_bag.hpp"
#include "cparser/peek_buffer.hpp"
#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <span>
#include <string>
#include <vector>

namespace cc {

class parser final {
    peek_buffer m_buffer;
    diagnostic_bag m_diagnostics;

    template <std::same_as<syntax_kind>... Ks>
    constexpr bool is_one_of(syntax_kind kind, Ks... ks) noexcept {
        return (... || (kind == ks));
    }

    template <std::same_as<syntax_kind>... Ks> token match_token(Ks... kinds) noexcept {
        auto tok = m_buffer.peek();
        if (is_one_of(tok.kind(), kinds...)) {
            return m_buffer.advance();
        }
        m_diagnostics.report_unexpected_token(tok.span, tok.kind(), kinds...);
        return token{syntax_kind::bad_token, source_span::with_length(tok.span.begin, 0), ""};
    }

    std::unique_ptr<ast::expression> parse_literal_expression() noexcept;
    std::unique_ptr<ast::expression> parse_expression() noexcept;
    std::unique_ptr<ast::statement> parse_expression_statement() noexcept;

  public:
    explicit parser(std::string&& source_text) noexcept;

    std::unique_ptr<ast::statement> parse() noexcept;

    std::span<const diagnostic> diagnostics() noexcept;
};

} // namespace cc
