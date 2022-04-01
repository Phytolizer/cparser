#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"
namespace cc::ast {

class literal_expression final : public expression_syntax {
  public:
    token literal_token;

    explicit literal_expression(token&& literal_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;
};

} // namespace cc::ast
