add_library(
    "cparser"
    "source/ast/expression_statement.cpp"
    "source/ast/literal_expression.cpp"
    "source/diagnostic.cpp"
    "source/diagnostic_bag.cpp"
    "source/lexer.cpp"
    "source/parser.cpp"
    "source/peek_buffer.cpp"
    "source/token.cpp"
)
target_include_directories("cparser" PUBLIC "include")

target_link_libraries("cparser" PUBLIC "fmt::fmt" "magic_enum::magic_enum")

add_library("cparser::cparser" ALIAS "cparser")
