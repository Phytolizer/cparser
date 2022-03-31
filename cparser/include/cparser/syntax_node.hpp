#pragma once

#include "cparser/syntax_kind.hpp"

#include <vector>

namespace cc {

class syntax_node {
  public:
    virtual ~syntax_node() = default;
    virtual syntax_kind kind() const noexcept = 0;
    virtual std::vector<const syntax_node*> children() const noexcept = 0;
};

} // namespace cc
