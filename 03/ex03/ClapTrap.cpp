/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:10:43 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 13:38:24 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unnamed"), hitPoints(10), energyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), hitPoints(10), energyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hP, int eP, int aD) : _name(name), hitPoints(hP), energyPoints(eP), AttackDamage(aD) {
	std::cout << "ClapTrap name + inputs constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	ClapTrap::operator=(other);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}


void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints -= amount;
		std::cout << "Someone attacks " << this->_name << ", causing " << amount << " points of damage! Now have (" << this->hitPoints << ") hitPoints" << std::endl;
	}
	else if (this->hitPoints <= 0) {
		std::cout << this->_name << " it's already dead! " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		this->hitPoints += amount;
		std::cout << this->_name << " repair " << amount << " hitPoints, now have (" << this->hitPoints << ")" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void    ClapTrap::printStats(void) {
    std::cout << "hitPoints -> " << this->hitPoints << std::endl;
    std::cout << "energyPoints -> " << this->energyPoints << std::endl;
    std::cout << "attackDamage -> " << this->AttackDamage << std::endl;
}