/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:48:06 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/28 12:44:40 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(std::string name, int hP, int eP, int aD);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		FragTrap& operator=(const FragTrap& other);

		void	highFivesGuys(void);
		void	attack(const std::string& target);
	
	private:
	
};