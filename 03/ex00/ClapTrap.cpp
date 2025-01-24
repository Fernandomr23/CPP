/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:10:43 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/24 17:37:29 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(void) : _name("Unnamed") {
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don´t have enough hitPoints! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints -= amount;
		std::cout << "Someone attacks ClapTrap " << this->_name << ", causing " << amount << " points of damage! Now have (" << this->hitPoints << ") hitPoints" << std::endl;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " it's already dead! " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repair " << amount << " hitPoints, now have (" << this->hitPoints << ")" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don´t have hitPoints! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}