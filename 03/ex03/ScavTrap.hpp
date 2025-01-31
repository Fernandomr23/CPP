/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:48:06 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 12:44:31 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hP, int eP, int aD);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap& other);

		void	guardGate();
		void	attack(const std::string& target);
	
	private:
		bool	guard_mode;
};