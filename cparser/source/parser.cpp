#include "cparser/parser.hpp"

#include "cparser/ast/expression_statement.hpp"
#include "cparser/ast/literal_expression.hpp"
#include "cparser/syntax_kind.hpp"

std::unique_ptr<cc::ast::expression> cc::parser::parse_literal_expression() noexcept {
    auto literal_token =
            match_token(syntax_kind::string_literal_token, syntax_kind::character_constant_token,
                    syntax_kind::decimal_constant_token, syntax_kind::floating_constant_token,
                    syntax_kind::hexadecimal_constant_token, syntax_kind::octal_constant_token);

    return std::make_unique<cc::ast::literal_expression>(std::move(literal_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_expression() noexcept {
    return parse_literal_expression();
}

std::unique_ptr<cc::ast::statement> cc::parser::parse_expression_statement() noexcept {
    auto expression = parse_expression();
    auto semicolon_token = match_token(syntax_kind::semicolon_token);
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
