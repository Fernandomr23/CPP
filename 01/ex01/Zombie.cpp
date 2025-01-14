/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:00:08 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 17:02:58 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("Unnamed") {}

Zombie::~Zombie(void) {
	std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
