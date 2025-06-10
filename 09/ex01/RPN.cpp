/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:48:58 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/10 17:23:00 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool isValidNumber(std::string token) {
    if (token.size() > 2)
        return (false);
    if (!isdigit(token[0]) || !isdigit(token[token.size() - 1]))
        return (false);
    if (atoi(token.c_str()) > 10)
        return (false);
    return (true);
}

RPN::RPN(std::string input) {
    std::string token;
    size_t      pos = 0;
    
    try
    {   
        while ((pos = input.find(' ')) != std::string::npos) {
            token = input.substr(0, pos);
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                calculateToken(token);
            }
            else {
                if (!isValidNumber(token))
                    throw invalidNumberException(token);
                tokens.push_back(token);
            }
            input.erase(0, pos + 1);
        }
        if (!input.empty()) {
            calculateToken(input);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit (1);
    }
}

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN& RPN::operator=(const RPN &other) {
    if (this != &other) {
        this->tokens = other.tokens;
    }
    return (*this);
}

void    RPN::calculateToken(std::string& token) {

    if (tokens.size() < 2) {
        std::cerr << "Error" << std::endl;
        exit (1);
    }
    int num2 = atoi(tokens.back().c_str());
    tokens.pop_back();
    
    int num1 = atoi(tokens.back().c_str());
    tokens.pop_back();

    int result = 0;
    try
    {   
        if (token == "+") {
            result = num1 + num2;
        } else if (token == "-") {
            result = num1 - num2;
        } else if (token == "*") {
            result = num1 * num2;
        } else if (token == "/") {
            result = num1 / num2;
        } else {
            throw invalidOperators(token);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
    std::stringstream ss;

    ss << result;
    tokens.push_back(ss.str()); 
}

int RPN::calculateResult() { return atoi(tokens.back().c_str()); }