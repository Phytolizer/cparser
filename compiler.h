#ifndef CPARSER_COMPILER_H
#define CPARSER_COMPILER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "phase4.tab.h"

    struct token
    {
        enum phase4tokentype type;
        char *text;
    };

    struct token_list
    {
        struct token *token;
        struct token_list *next;
    };

    struct identifier_list
    {
        char *text;
        struct identifier_list *next;
    };

    extern void include_file(const struct token_list *tokens);
    extern void define_simple_macro(const struct token *name, struct token_list *replacement);
    extern void define_function_like_macro(const struct token *name, struct identifier_list *parameters,
                                           struct token_list *replacement);
    extern void define_function_like_variadic_macro(const struct token *name, struct token_list *replacement);
    extern void define_function_like_variadic_macro_with_args(const struct token *name,
                                                              struct identifier_list *parameters,
                                                              struct token_list *replacement);
    extern void undefine_macro(const struct token *name);

#ifdef __cplusplus
}
#endif

#endif // CPARSER_COMPILER_H
