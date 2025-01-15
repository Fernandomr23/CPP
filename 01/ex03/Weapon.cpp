/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:34:54 by fernando          #+#    #+#             */
/*   Updated: 2025/01/15 16:02:59 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {}

Weapon::~Weapon(void) {}

const std::string&  Weapon::getType(void) {
    return (this->type);
}

void    Weapon::setType(std::string str) {
    this->type = str;
}
