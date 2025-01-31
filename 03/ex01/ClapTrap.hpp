/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:16:21 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 10:28:29 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hP, int eP, int aD);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& other);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
	protected:
		std::string	_name;
		int			hitPoints;
		int			energyPoints;
		int			AttackDamage;
};
