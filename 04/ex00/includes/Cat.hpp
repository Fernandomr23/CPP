/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:42:52 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:45:04 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <Animal.hpp>

class Cat : public Animal {
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat& other);
		~Cat(void);
		
		Cat	&operator=(const Cat& other);

		void makeSound(void) const;
	private:
};
