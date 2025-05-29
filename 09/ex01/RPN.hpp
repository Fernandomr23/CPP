/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:48:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/05/29 16:29:05 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <exception>

class RPN
{
    private:
        std::vector<std::string> tokens;
        
    public:
        RPN();
        RPN(std::string input);
        ~RPN();
        RPN(const RPN& other);

        RPN &operator=(const RPN& other);
        
        void    calculateToken(std::string& token);
        int     calculateResult();

        class invalidNumberException : public std::exception
        {
            private:
                std::string error;

            public:
                invalidNumberException(std::string _error) : error("Error: Invalid number: " + _error) {};
                virtual ~invalidNumberException() throw() {};
                
                virtual const char *what() const throw()
                {
                    return (error.c_str());
                }
        };

        class invalidOperators : public std::exception
        {
            private:
                std::string error;

            public:
                invalidOperators(std::string token) : error("Invalid operator combination: " + token) {};
                virtual ~invalidOperators() throw() {};
                
                virtual const char *what() const throw()
                {
                    return (error.c_str());
                }
        };
};
