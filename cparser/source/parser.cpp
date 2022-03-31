#include "cparser/parser.hpp"

#include "cparser/ast/expression_statement.hpp"
#include "cparser/ast/literal_expression.hpp"
#include "cparser/ast/name_expression.hpp"
#include "cparser/ast/parenthesized_expression.hpp"
#include "cparser/syntax_kind.hpp"

std::unique_ptr<cc::ast::expression> cc::parser::parse_literal_expression() noexcept {
    auto literal_token = match_token("literal", syntax_kind::string_literal_token,
            syntax_kind::character_constant_token, syntax_kind::decimal_constant_token,
            syntax_kind::floating_constant_token, syntax_kind::hexadecimal_constant_token,
            syntax_kind::octal_constant_token);

    return std::make_unique<cc::ast::literal_expression>(std::move(literal_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_name_expression() noexcept {
    auto name_token = match_token("name", syntax_kind::identifier_token);

    return std::make_unique<cc::ast::name_expression>(std::move(name_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_parenthesized_expression() noexcept {
    auto open_parenthesis_token = match_token({}, syntax_kind::left_parenthesis_token);
    auto expression = parse_expression();
    auto close_parenthesis_token = match_token({}, syntax_kind::right_parenthesis_token);

    return std::make_unique<cc::ast::parenthesized_expression>(std::move(open_parenthesis_token),
            std::move(expression), std::move(close_parenthesis_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_primary_expression() noexcept {
    switch (m_buffer.peek().kind()) {
        case syntax_kind::identifier_token:
            return parse_name_expression();
        case syntax_kind::left_parenthesis_token:
            return parse_parenthesized_expression();
        default:
            return parse_literal_expression();
    }
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_expression() noexcept {
    return parse_primary_expression();
}

std::unique_ptr<cc::ast::statement> cc::parser::parse_expression_statement() noexcept {
    auto expression = parse_expression();
    auto semicolon_token = match_token({}, syntax_kind::semicolon_token);
    return std::make_unique<ast::expression_statement>(
            std::move(expression), std::move(semicolon_token));
}

cc::parser::parser(std::string&& source_text) noexcept : m_buffer(std::move(source_text)) {}

std::unique_ptr<cc::ast::statement> cc::parser::parse() noexcept {
    return parse_expression_statement();
}

std::span<const cc::diagnostic> cc::parser::diagnostics() noexcept {
    m_diagnostics.add_all(m_buffer.diagnostics());
    return m_diagnostics.diagnostics();
}
