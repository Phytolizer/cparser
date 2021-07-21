#ifndef CPARSER_TOKENS_H
#define CPARSER_TOKENS_H

#ifdef __cplusplus
extern "C"
{
#endif

    enum TokenType
    {
        PP_EOF = -1,
        PP_EOL,
        PP_HEADER_NAME,
        PP_UCHAR_NAME,
        PP_IDENTIFIER,
        PP_INTEGRAL_CONSTANT,
        PP_FLOATING_CONSTANT,
        PP_CHARACTER_CONSTANT,
        PP_STRING_LITERAL,
        PP_PUNCTUATOR,
        PP_INCLUDE,
        PP_DEFINE,
        PP_OTHER_CHAR,
    };

#ifdef __cplusplus
}
#endif

#endif // CPARSER_TOKENS_H
