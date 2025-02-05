/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:35:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:32:09 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(Animal& other);
		virtual ~Animal(void);
		
		Animal	&operator=(const Animal& other);

		std::string const &getType(void) const;
		void		setType(std::string const &type);
		
		virtual void		makeSound(void) const;
	protected:
		std::string _type;	
};
