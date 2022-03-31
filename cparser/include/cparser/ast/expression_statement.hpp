#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/ast/statement.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"

#include <memory>

namespace cc::ast {

class expression_statement final : public statement {
    std::unique_ptr<expression> m_expression;
    token m_semicolon_token;

  public:
    explicit expression_statement(
            std::unique_ptr<expression> expression, token&& semicolon_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& expression() const noexcept;
    const token& semicolon_token() const noexcept;
};

} // namespace cc::ast
