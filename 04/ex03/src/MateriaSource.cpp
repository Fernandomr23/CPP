/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:55:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 10:11:41 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource() {
	// std::cout << "MateriaSource Default Constructor called." << std::endl;
	this->idx = 0;
	for (int i = 0; i < 4; i++) {
		this->slot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	this->idx = 0;
	*this = other;
}

MateriaSource::~MateriaSource() {
	// std::cout << "MateriaSource Destructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slot[i])
			delete this->slot[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other)
	{
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

void	MateriaSource::learnMateria(AMateria* mat) {
	if (idx < 4) {
		if (this->slot[idx]) {
            delete this->slot[idx];
        }
		this->slot[idx] = mat;
		idx++;
	}
	else {
		std::cout << "Already have 4 Materia." << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->slot[i] && this->slot[i]->getType() == type)
			return (slot[i]->clone());
	}
	std::cout << "Don´t have this type of Materia." << std::endl;
	return (0);
}
