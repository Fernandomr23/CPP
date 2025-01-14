/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:56:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 16:47:15 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main(void) 
{
	Zombie	*newZ;
	std::string name;
	std::string N;
	int			num;
	int 		i;
	
	std::cout << "Number of Zombies: ";
	std::getline(std::cin, N);
	std::cout << "Name for the Zombies: ";
	std::getline(std::cin, name);
	num = std::atoi(N.c_str());
	newZ = zombieHorde(num, name);
	std::cout << "Announce zombieHorde? (y/n): ";
	std::getline(std::cin, name);
	i = 0;
	if (name == "y") {
		while (i < num)
			newZ[i++].announce();
	}
	delete[] newZ;
	
	return (0);
}