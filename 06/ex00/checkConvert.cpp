/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkConvert.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:24:06 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/19 12:49:37 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkConvert.hpp"

// void	printDouble(const std::string &literal)
// {
// 	double	d = std::atof(literal.c_str());
// 	char	c = static_cast<char>(f);
// 	if (isprint(c))
// 		std::cout << "char: '" << c << "'" << std::endl;
// 	else
// 		std::cout << "char: Non displayable" << std::endl;
// 	std::cout << "int: " << static_cast<int>(f) << std::endl;
// 	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
// 	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
// }

void	printInvalid(void)
{
	std::cout << "char: invalid input" << std::endl;
	std::cout << "int: invalid input" << std::endl;
	std::cout << "float: invalid input" << std::endl;
	std::cout << "double: invalid input" << std::endl;
	
}


void	printSpecial(const std::string &literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	
	if (!literal.compare("nan") || !literal.compare("nanf"))
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else
	{
		if (!literal.find("-"))
		{
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else
		{
			std::cout << "float: inff" << std::endl;
			std::cout << "double: inf" << std::endl;
		}
	}
}

void	printDouble(const std::string &literal)
{
	double	d = std::atof(literal.c_str());
	char	c = static_cast<char>(d);
	
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: ";
	if (static_cast<long>(d) < MIN_INT || static_cast<long>(d) > MAX_INT)
		std::cout << "impossible"<< std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	printFloat(const std::string &literal)
{
	float	f = std::atof(literal.c_str());
	char	c = static_cast<char>(f);
	
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: ";
	if (static_cast<long>(f) < MIN_INT || static_cast<long>(f) > MAX_INT)
		std::cout << "impossible"<< std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void	printInt(const std::string &literal)
{
	long	l = std::atol(literal.c_str());

	std::cout << "char: ";
	if (l < 0 || l > 127)
		std::cout << "impossible" << std::endl;
	else if (isprint(l))
		std::cout << "'" << static_cast<char>(l) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (l < MIN_INT || l > MAX_INT)
		std::cout << "impossible"<< std::endl;
	else
		std::cout << static_cast<int>(l) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(l) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(l) << std::endl;
}

void	printChar(const std::string &literal, int len)
{
	char c;

	if (len == 3)
		c = literal[1];
	else
		c = literal[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

static int	floatType(const std::string& str, size_t dot)
{
	size_t	len = str.length();
	
	for (size_t i = 0; i < len; i++)
	{
		if (i == dot)
			i++;
		if (!isdigit(str[i]))
		{
			if (i != len - 1 || (i == 0 && (str[i] != '+' || str[i] != '-')))
				return (0);
		}
	}
	return (1);
}

static int	specialType(const std::string& str)
{
	if (!str.compare("+inff") || !str.compare("inff") || !str.compare("-inff") || !str.compare("nanf"))
		return (1);
	if (!str.compare("+inf") || !str.compare("inf") || !str.compare("-inf") || !str.compare("nan"))
		return (1);
	return (0);
}

static int	intType(const std::string& str)
{
	int	i = 0;
	int max = 11;
	int	len = str.length();
	
	if (str[0] == '-' || str[0] == '+') {
		i = 1;
		max = 12;
	}
	if (len == 0 || len >= max)
		return (0);
	while (str[i]) {
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	characterType(const std::string& str)
{
	int	len = str.length();
	
	if (len == 1 && !isdigit(str[0]))
		return (1);
	if (len == 3 && str[0] == '\'' && str[2] == '\'')
		return (1);
	return (0);
}

int	checkType(const std::string& literal)
{
	size_t	dot = literal.find('.');
	size_t	f = literal.find('f');

	if (dot == std::string::npos)
	{
		if (characterType(literal))
			return (0);
		else if (intType(literal))
			return (1);
		else if (specialType(literal))
			return (2);
	}
	if (dot != std::string::npos && f != std::string::npos)
	{
		if (floatType(literal, dot))
			return (3);
	}
	if (dot != std::string::npos && f == std::string::npos)
		return (4);
	return (-1);
}