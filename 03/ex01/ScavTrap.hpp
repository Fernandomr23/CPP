/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:48:06 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/27 13:36:17 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	guardGate();
		void	attack(const std::string& target);
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& other);
		~ScavTrap(void);
	
	private:
		bool	guard_mode;
};