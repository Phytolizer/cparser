#include "cparser/lexer.hpp"
#include "cparser/token.hpp"

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
            std::cout << tok << '\n';
        }
    }
}
