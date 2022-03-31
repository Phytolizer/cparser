#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/ast/separated_syntax_list.hpp"
#include "cparser/ast/statement.hpp"
#include "cparser/diagnostic_bag.hpp"
#include "cparser/peek_buffer.hpp"
#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace cc {

class parser final {
    peek_buffer m_buffer;
    diagnostic_bag m_diagnostics;

    template <std::same_as<syntax_kind>... Ks>
    constexpr bool is_one_of(syntax_kind kind, Ks... ks) noexcept {
        return (... || (kind == ks));
    }

    template <std::same_as<syntax_kind>... Ks>
    token match_token(std::optional<std::string_view> description, Ks... kinds) noexcept {
        auto tok = m_buffer.peek();
        if (is_one_of(tok.kind(), kinds...)) {
            return m_buffer.advance();
        }
        m_diagnostics.report_unexpected_token(tok.span, description, tok.kind(), kinds...);
        auto manufactured_token = token{
                syntax_kind::bad_token,
                source_span::with_length(tok.span.begin, 0),
                "",
        };
        m_buffer.advance();
        return manufactured_token;
    }

    std::unique_ptr<ast::expression> parse_literal_expression() noexcept;
    std::unique_ptr<ast::expression> parse_name_expression() noexcept;
    std::unique_ptr<ast::expression> parse_parenthesized_expression() noexcept;
    std::unique_ptr<ast::expression> parse_primary_expression() noexcept;
    ast::separated_syntax_list<ast::expression> parse_argument_list() noexcept;
    std::unique_ptr<ast::expression> parse_postfix_expression() noexcept;
    std::unique_ptr<ast::expression> parse_unary_expression(std::size_t parent_precedence) noexcept;
    std::unique_ptr<ast::expression> parse_expression() noexcept;
    std::unique_ptr<ast::statement> parse_expression_statement() noexcept;

  public:
    explicit parser(std::string&& source_text) noexcept;

    std::unique_ptr<ast::statement> parse() noexcept;

    std::span<const diagnostic> diagnostics() noexcept;
};

} // namespace cc
