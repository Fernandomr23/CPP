/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:58:22 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 10:09:05 by fernando         ###   ########.fr       */
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
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 20;
	this->guard_mode = false;
}

ScavTrap::ScavTrap(std::string name, int hP, int eP, int aD) : ClapTrap(name, hP, eP, aD) {
	std::cout << "ScavTrap Name + inputs constructor called" << std::endl;
	this->guard_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	ScavTrap::operator=(other);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (!this->guard_mode) {
		this->guard_mode = true;
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	}
	else if (this->guard_mode) {
		this->guard_mode = false;
		std::cout << "ScavTrap " << this->_name << " Gate keeper mode OFF" << std::endl;
	}
}