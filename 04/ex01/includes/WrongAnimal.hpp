/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:35:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:40:10 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(WrongAnimal& other);
		virtual ~WrongAnimal(void);
		
		WrongAnimal	&operator=(const WrongAnimal& other);

		std::string const &getType(void) const;
		void		setType(std::string const &type);
		
		void		makeSound(void) const;
	protected:
		std::string _type;	
};
