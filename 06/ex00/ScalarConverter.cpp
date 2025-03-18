/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:48:16 by fernando          #+#    #+#             */
/*   Updated: 2025/03/18 19:14:39 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "checkConvert.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return (*this); }

void ScalarConverter::convert(const std::string& literal)
{
	int	type = checkType(literal);
	int	len = literal.length();
	switch (type)
	{
		case 0:
			printChar(literal, len);
			break;
		case 1:
			printInt(literal);
			break;
		case 2:
			printSpecial(literal);
			break;
		case 3:
			printFloat(literal);
			break;
		// case 3:
		// 	printDouble(literal);
		// 	break;
		// default:
		// 	printInvalid(litreal);
		// 	break;
	}
}