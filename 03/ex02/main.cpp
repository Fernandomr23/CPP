/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:56:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/03 12:36:15 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	FragTrap e;
	FragTrap f("Chadd");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	e.printStats();
	f.printStats();
	e.highFivesGuys();
	e.attack("some random dude");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("some random dude");
	f.highFivesGuys();
	// for(int i = 0; i < 101; i++)
	// 	f.attack("FragTrap-clone");
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	
	return (0);
}