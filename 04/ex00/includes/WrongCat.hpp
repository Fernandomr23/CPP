/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:42:52 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:45:28 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat& other);
		~WrongCat(void);
		
		WrongCat	&operator=(const WrongCat& other);

		void makeSound(void) const;
	private:
};
