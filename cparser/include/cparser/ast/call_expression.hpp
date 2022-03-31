#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/ast/separated_syntax_list.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"

#include <memory>

namespace cc::ast {

class call_expression final : public expression {
    std::unique_ptr<expression> m_callee;
    token m_open_parenthesis_token;
    separated_syntax_list<expression> m_arguments;
    token m_close_parenthesis_token;

  public:
    call_expression(std::unique_ptr<expression> callee, token&& open_parenthesis_token,
            separated_syntax_list<expression> arguments, token&& close_parenthesis_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& callee() const noexcept;
    const token& open_parenthesis_token() const noexcept;
    const separated_syntax_list<expression>& arguments() const noexcept;
    const token& close_parenthesis_token() const noexcept;
};

} // namespace cc::ast
