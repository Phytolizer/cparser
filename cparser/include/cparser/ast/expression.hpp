#pragma once

#include "cparser/syntax_node.hpp"
namespace cc::ast {

class expression : public syntax_node {
  public:
    virtual ~expression() = default;
};

} // namespace cc::ast
