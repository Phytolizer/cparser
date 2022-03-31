add_library(
    "cparser"
    "source/ast/array_index_expression.cpp"
    "source/ast/call_expression.cpp"
    "source/ast/decrement_expression.cpp"
    "source/ast/expression_statement.cpp"
    "source/ast/increment_expression.cpp"
    "source/ast/literal_expression.cpp"
    "source/ast/member_access_expression.cpp"
    "source/ast/name_expression.cpp"
    "source/ast/parenthesized_expression.cpp"
    "source/ast/separated_syntax_list.cpp"
    "source/diagnostic.cpp"
    "source/diagnostic_bag.cpp"
    "source/lexer.cpp"
    "source/parser.cpp"
    "source/peek_buffer.cpp"
    "source/syntax_node.cpp"
    "source/token.cpp"
)
target_include_directories("cparser" PUBLIC "include")

if(MAIDEN_MODE)
    set(MAIDEN_MODE "true")
else()
    set(MAIDEN_MODE "false")
endif()

configure_file(
    "${PROJECT_SOURCE_DIR}/cmake/config.hpp.cin" "include/config.hpp" @ONLY
)
target_include_directories(
    "cparser" PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/include"
)

target_link_libraries("cparser" PUBLIC "fmt::fmt" "magic_enum::magic_enum")

add_library("cparser::cparser" ALIAS "cparser")
