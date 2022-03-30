#include "cparser/lexer.hpp"
#include "cparser/token.hpp"
#include "fmt/core.h"

#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

int main() {
    std::string line;
    while (true) {
        if (!std::getline(std::cin, line)) {
            break;
        }

        cc::lexer lexer{std::move(line)};
        std::vector<cc::token> tokens;
        std::ranges::copy(lexer, std::back_inserter(tokens));
        for (const auto& diag : lexer.diagnostics()) {
            fmt::print("{}: {}\n", diag.span, diag);
        }
    }
}
