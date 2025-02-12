/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:55:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 10:11:41 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <AMateria.hpp>

Character::Character() {
	// std::cout << "Character Default Constructor called." << std::endl;
	this->idx = 0;
	for (int i = 0; i < 4; i++) {
		this->slot[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	// std::cout << "Character name Constructor called." << std::endl;
	this->idx = 0;
	for (int i = 0; i < 4; i++) {
		this->slot[i] = NULL;
	}
}

Character::Character(Character& other) {
	*this = other;
}

Character::~Character() {
	// std::cout << "Character Destructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slot[i])
			delete this->slot[i];
	}
}

Character& Character::operator=(const Character& other) {
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->slot[i])
				delete this->slot[i];
			if (other.slot[i])
				this->slot[i] = other.slot[i]->clone();
			else
				this->slot[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	if (this->idx < 4) {
		this->slot[idx] = m;
		idx++;
	}
}

void	Character::unequip(int idx) {
	this->slot[idx] = NULL;
	idx--;
}

void	Character::use(int idx, ICharacter& target) {
	if (this->slot[idx]) {
		this->slot[idx]->use(target);
	}
	else {
		std::cout << "Don´t have equip in this slot." << std::endl;
	}
}
