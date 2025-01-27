/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:58:22 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/27 13:40:08 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 20;
	this->guard_mode = false;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 20;
	this->guard_mode = false;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (!this->guard_mode) {
		this->guard_mode = true;
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
	else if (this->guard_mode) {
		this->guard_mode = false;
		std::cout << "ScavTrap Gate keeper mode OFF" << std::endl;
	}
}