/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:42:52 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:52:13 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

class Dog : public Animal {
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog& other);
		~Dog(void);
		Dog	&operator=(const Dog& other);

		void makeSound(void);
	private:
};

