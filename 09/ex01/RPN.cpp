/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:48:58 by fmorenil          #+#    #+#             */
/*   Updated: 2025/05/29 12:54:06 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input) {
    std::string token;
    size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {
        token = input.substr(0, pos);
        if (token == "+" || token == "-" || token == "*" || token == "/")
            calculateToken(token);
        else
            tokens.push_back(token);
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        calculateToken(input);
    }

    std::vector<std::string>::iterator it;

    for (it = tokens.begin(); it != tokens.end(); ++it) {
        std::cout << *it << std::endl;
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
    int num2 = atoi(tokens.back().c_str());
    tokens.pop_back();
    
    int num1 = atoi(tokens.back().c_str());
    tokens.pop_back();

    int result = 0;
    
    if (token == "+") {
        result = num1 + num2;
    } else if (token == "-") {
        result = num1 - num2;
    } else if (token == "*") {
        result = num1 * num2;
    } else if (token == "/") {
        result = num1 / num2;
    } else {
        throw std::invalid_argument("Invalid operator: " + token);
    }
    std::stringstream ss;

    ss << result;
    tokens.push_back(ss.str()); 
}

int RPN::calculateResult() { return atoi(tokens.back().c_str()); }