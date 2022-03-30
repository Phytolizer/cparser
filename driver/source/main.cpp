#include "cparser/lexer.hpp"
#include "cparser/token.hpp"
#include "fmt/core.h"

#include <iostream>
#include <string>

int main() {
    std::string line;
    while (true) {
        if (!std::getline(std::cin, line)) {
            break;
        }

        cc::lexer lexer{std::move(line)};
        for (cc::token tok : lexer) {
            fmt::print("{}\n", tok);
        }
        for (const auto& diag : lexer.diagnostics()) {
            fmt::print("{}: {}\n", diag.span, diag);
        }
    }
}
