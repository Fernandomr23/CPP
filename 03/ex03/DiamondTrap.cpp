/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:35:12 by fernando          #+#    #+#             */
/*   Updated: 2025/02/03 13:55:50 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unnamed_clap_name"), _name("Unnamed") {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 30;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name, int hP, int eP, int aD) : ClapTrap(name + "_clap_name", hP, eP, aD), _name(name) {
	std::cout << "DiamondTrap Name + inputs constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	DiamondTrap::operator=(other);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->AttackDamage = other.AttackDamage;
	ClapTrap::_name = this->_name + "_clap_name"; 
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "DiamonTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
