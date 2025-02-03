/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:42:52 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:52:09 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

class Cat : public Animal {
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat& other);
		~Cat(void);
		Cat	&operator=(const Cat& other);

		void makeSound(void);
	private:
};
