/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:48:58 by fmorenil          #+#    #+#             */
/*   Updated: 2025/05/29 12:03:34 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input) {
    std::string token;
    size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {
        token = input.substr(0, pos);
        tokens.push_back(token);
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        tokens.push_back(input);
    }
}

RPN::~RPN() {}

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN& RPN::operator=(const RPN &other) {
    if (this != &other) {
        
    }
    return (*this);
}
