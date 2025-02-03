/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:56:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/03 12:33:02 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap	c("Hugues");
		ScavTrap	d("Ben");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.printStats();
		d.printStats();
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		d.guardGate();
		d.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}