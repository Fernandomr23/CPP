/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:34:18 by fernando          #+#    #+#             */
/*   Updated: 2025/01/28 12:54:23 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(std::string name, int hP, int eP, int aD);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap(void);
		DiamondTrap& operator=(const DiamondTrap& other);

		void	attack(const std::string& target);
		void 	whoAmI(void);
    private:
		std::string _name;
};