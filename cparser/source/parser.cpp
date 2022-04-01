#include "cparser/parser.hpp"

#include "config.hpp"
#include "cparser/ast/array_index_expression.hpp"
#include "cparser/ast/binary_expression.hpp"
#include "cparser/ast/call_expression.hpp"
#include "cparser/ast/decrement_expression.hpp"
#include "cparser/ast/expression.hpp"
#include "cparser/ast/expression_statement.hpp"
#include "cparser/ast/increment_expression.hpp"
#include "cparser/ast/literal_expression.hpp"
#include "cparser/ast/member_access_expression.hpp"
#include "cparser/ast/name_expression.hpp"
#include "cparser/ast/parenthesized_expression.hpp"
#include "cparser/ast/separated_syntax_list.hpp"
#include "cparser/ast/unary_expression.hpp"
#include "cparser/syntax_facts.hpp"
#include "cparser/syntax_kind.hpp"

#include <memory>
#include <vector>

std::unique_ptr<cc::ast::expression> cc::parser::parse_literal_expression() noexcept {
    auto literal_token = match_token("literal", syntax_kind::string_literal_token,
            syntax_kind::character_constant_token, syntax_kind::decimal_constant_token,
            syntax_kind::floating_constant_token, syntax_kind::hexadecimal_constant_token,
            syntax_kind::octal_constant_token);

    return std::make_unique<ast::literal_expression>(std::move(literal_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_name_expression() noexcept {
    auto name_token = match_token("name", syntax_kind::identifier_token);

    if constexpr (maiden_mode) {
        if (!name_token.text.starts_with("maiden")) {
            m_diagnostics.report_no_maidens(name_token.span);
        }
    }

    return std::make_unique<ast::name_expression>(std::move(name_token));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_parenthesized_expression() noexcept {
    auto open_parenthesis_token = match_token({}, syntax_kind::left_parenthesis_token);
    auto expression = parse_expression();
    auto close_parenthesis_token = match_token({}, syntax_kind::right_parenthesis_token);

    return std::make_unique<ast::parenthesized_expression>(std::move(open_parenthesis_token),
            std::move(expression), std::move(close_parenthesis_token));
}

cc::ast::separated_syntax_list<cc::ast::expression> cc::parser::parse_argument_list() noexcept {
    auto arguments = std::vector<std::unique_ptr<syntax_node>>{};

    if (m_buffer.peek().kind() != syntax_kind::right_parenthesis_token) {
        arguments.emplace_back(parse_expression());

        while (m_buffer.peek().kind() == syntax_kind::comma_token) {
            arguments.emplace_back(
                    std::make_unique<token>(match_token({}, syntax_kind::comma_token)));
            arguments.emplace_back(parse_expression());
        }
    }

    return ast::separated_syntax_list<ast::expression>{std::move(arguments)};
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

std::unique_ptr<cc::ast::expression> cc::parser::parse_postfix_expression() noexcept {
    auto left = parse_primary_expression();

    bool looping = true;
    while (looping) {
        switch (m_buffer.peek().kind()) {
            case syntax_kind::left_bracket_token: {
                auto open_bracket_token = m_buffer.advance();
                auto index = parse_expression();
                auto close_bracket_token = match_token({}, syntax_kind::right_bracket_token);
                left = std::make_unique<ast::array_index_expression>(std::move(left),
                        std::move(open_bracket_token), std::move(index),
                        std::move(close_bracket_token));
            } break;
            case syntax_kind::left_parenthesis_token: {
                auto open_parenthesis_token = m_buffer.advance();
                auto arguments = parse_argument_list();
                auto close_parenthesis_token =
                        match_token({}, syntax_kind::right_parenthesis_token);
                left = std::make_unique<ast::call_expression>(std::move(left),
                        std::move(open_parenthesis_token), std::move(arguments),
                        std::move(close_parenthesis_token));
            } break;
            case syntax_kind::period_token:
            case syntax_kind::arrow_token: {
                auto operator_token = m_buffer.advance();
                auto name_token = match_token({}, syntax_kind::identifier_token);
                left = std::make_unique<ast::member_access_expression>(
                        std::move(left), std::move(operator_token), std::move(name_token));
            } break;
            case syntax_kind::plus_plus_token: {
                auto operator_token = m_buffer.advance();
                left = std::make_unique<ast::increment_expression>(
                        std::move(left), std::move(operator_token));
            } break;
            case syntax_kind::minus_minus_token: {
                auto operator_token = m_buffer.advance();
                left = std::make_unique<ast::decrement_expression>(
                        std::move(left), std::move(operator_token));
            } break;
            default:
                looping = false;
                break;
        }
    }

    return left;
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_unary_expression(
        std::size_t parent_precedence) noexcept {
    auto unary_operator_precedence = facts::unary_operator_precedence(m_buffer.peek().kind());
    if (unary_operator_precedence == 0 || unary_operator_precedence < parent_precedence) {
        return parse_postfix_expression();
    }

    auto operator_token = m_buffer.advance();
    auto right = parse_unary_expression(unary_operator_precedence);
    return std::make_unique<ast::unary_expression>(std::move(operator_token), std::move(right));
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_binary_expression(
        std::size_t parent_precedence) noexcept {
    auto left = parse_unary_expression(parent_precedence);

    while (true) {
        auto precedence = facts::binary_operator_precedence(m_buffer.peek().kind());
        if (precedence == 0 || precedence <= parent_precedence) {
            break;
        }

        auto operator_token = m_buffer.advance();
        auto right = parse_binary_expression(precedence);
        left = std::make_unique<ast::binary_expression>(
                std::move(left), std::move(operator_token), std::move(right));
    }

    return left;
}

std::unique_ptr<cc::ast::expression> cc::parser::parse_expression() noexcept {
    return parse_binary_expression(0);
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
