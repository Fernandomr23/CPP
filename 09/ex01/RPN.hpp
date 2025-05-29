/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:48:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/05/29 12:46:21 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <sstream>

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
                invalidNumberException(std::string _error) : error("Invalid number: " + _error) {};
                virtual ~invalidNumberException() throw() {};
                
                virtual const char *what() const throw()
                {
                    return (error.c_str());
                }
        };
};
