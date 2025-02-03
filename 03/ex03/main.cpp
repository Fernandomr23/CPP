/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:56:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/03 13:53:54 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Giga Chadd");
	DiamondTrap c(a);

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// a.printStats();
	a.whoAmI();
	a.attack("some super random dude");
	// b.printStats();
	b.whoAmI();
	b.attack("Chadd-clone");
	// c.printStats();
	c.whoAmI();
	c.attack("other random dude");
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	
	return (0);
}