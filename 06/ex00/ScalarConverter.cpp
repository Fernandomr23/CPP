/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:48:16 by fernando          #+#    #+#             */
/*   Updated: 2025/03/06 16:31:23 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return (*this); }

void ScalarConverter::convert(const std::string& literal)
{
	try
	{
		char c = static_cast<char>(std::stoi(literal));
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
	}
	
	try 
	{
		int i = std::stoi(literal);
		std::cout << "int: " << i << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << "int: impossible" << std::endl;
	}

	try 
	{
		float f = std::stof(literal);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << "float: impossible" << std::endl;
	}

	try 
	{
		double d = std::stod(literal);
		std::cout << "double: " << d << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << "double: impossible" << std::endl;
	}

}