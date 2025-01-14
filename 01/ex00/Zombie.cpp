/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:00:08 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 15:38:52 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie) : name(zombie) {
	std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
