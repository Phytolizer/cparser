#pragma once

#include "cparser/syntax_node.hpp"
namespace cc::ast {

class expression_syntax : public syntax_node {
  public:
    virtual ~expression_syntax() = default;
};

} // namespace cc::ast
