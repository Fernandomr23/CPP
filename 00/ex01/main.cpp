/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:08:39 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/11 19:32:45 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook	phoneBook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.showContacts();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}

    return (0);
}