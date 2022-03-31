#include "cparser/syntax_node.hpp"

#include "magic_enum.hpp"

#include <cstddef>
#include <iostream>

void cc::syntax_node::pretty_print(const syntax_node* node, std::ostream& os, bool is_console,
        std::string indent, bool is_last) noexcept {
    os << indent;
    if (is_last) {
        os << "`-";
    } else {
        os << "|-";
    }

    os << magic_enum::enum_name(node->kind()) << '\n';

    if (is_last) {
        indent += "  ";
    } else {
        indent += "| ";
    }
    auto children = node->children();
    for (std::size_t i = 0; i < children.size(); ++i) {
        pretty_print(children[i], os, is_console, indent, i == children.size() - 1);
    }
}

void cc::syntax_node::pretty_print() const noexcept {
    pretty_print(this, std::cout, true, "", true);
}

void cc::syntax_node::pretty_print(std::ostream& os) const noexcept {
    pretty_print(this, os, false, "", true);
}
