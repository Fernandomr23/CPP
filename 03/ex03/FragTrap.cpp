/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:58:22 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 10:25:44 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->AttackDamage = 30;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name, int hP, int eP, int aD) : ClapTrap(name, hP, eP, aD) {
	std::cout << "FragTrap Name + inputs constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	FragTrap::operator=(other);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0) {
		std::cout << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << this->_name << ": High Five man !" << std::endl;
	}
	else if (this->hitPoints <= 0) {
		std::cout << this->_name << " it's already dead! " << std::endl;
	}
	else if (this->energyPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " don´t have enough energyPoints! " << std::endl;
	}
}
