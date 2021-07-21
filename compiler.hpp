#ifndef CPARSER_COMPILER_HPP
#define CPARSER_COMPILER_HPP

extern "C"
{
#include "phase4.tab.h"
}

#include <string>
#include <string_view>
#include <vector>

struct TextSpan
{
    std::size_t firstLine;
    std::size_t lastLine;
    std::size_t firstColumn;
    std::size_t lastColumn;
};

struct RawSource
{
    std::string source;
    TextSpan span;
};

struct Token
{
    phase4tokentype type;
    TextSpan span;
};

struct TokenizedSource
{
    std::vector<Token> tokens;
};

void compile(std::string_view fileName);

#endif // CPARSER_COMPILER_HPP
