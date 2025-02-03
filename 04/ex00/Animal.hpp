/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:35:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:57:59 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal& other);
		~Animal(void);
		Animal	&operator=(Animal& other);

		std::string getType(void);
		void		makeSound(void);
	protected:
		std::string _type;	
};
