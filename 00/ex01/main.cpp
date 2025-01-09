/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:08:39 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/09 18:14:17 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			std::cout << "Enter -> ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "Enter -> SEARCH" << std::endl;
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}

    return (0);
}