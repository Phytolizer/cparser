#pragma once

#include "cparser/syntax_kind.hpp"

#include <ostream>
#include <string>
#include <vector>

namespace cc {

class syntax_node {
    static void pretty_print(const syntax_node* node, std::ostream& os, bool is_console,
            std::string indent, bool is_last) noexcept;

  public:
    virtual ~syntax_node() = default;
    virtual syntax_kind kind() const noexcept = 0;
    virtual std::vector<const syntax_node*> children() const noexcept = 0;

    void pretty_print() const noexcept;
    void pretty_print(std::ostream& os) const noexcept;
};

} // namespace cc
