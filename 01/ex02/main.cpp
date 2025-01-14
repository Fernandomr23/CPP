/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:24:29 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 18:27:50 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory Adress" << std::endl;

	std::cout << "String-> " << &string << std::endl;
	std::cout << "StringPTR-> " << stringPTR << std::endl;
	std::cout << "StringREF-> " << &stringREF << std::endl;

	std::cout << "Value" << std::endl;

	std::cout << "String-> " << string << std::endl;
	std::cout << "StringPTR-> " << *stringPTR << std::endl;
	std::cout << "StringREF-> " << stringREF << std::endl;
	return (0);
}