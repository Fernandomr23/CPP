/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:56:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 15:39:39 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int main(void) 
{
	Zombie	*newZ;
	std::string name;

	std::cout << "newZombie name: ";
	std::getline(std::cin, name);
	newZ = newZombie(name);
	std::cout << "Announce newZombie? (y/n): ";
	std::getline(std::cin, name);
	if (name == "y")
		newZ->announce();
	delete newZ;
	std::cout << "randomChump name: ";
	std::getline(std::cin, name);
	randomChump(name);
		
	return (0);
}