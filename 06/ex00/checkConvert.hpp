/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkConvert.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:28:46 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/19 12:45:01 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <iomanip>

#define MIN_INT std::numeric_limits<int>::min()
#define MAX_INT std::numeric_limits<int>::max()

int		checkType(const std::string& literal);
void	printChar(const std::string &literal, int len);
void	printInt(const std::string &literal);
void	printFloat(const std::string &literal);
void	printDouble(const std::string &literal);
void	printSpecial(const std::string &literal);
void	printInvalid(void);
