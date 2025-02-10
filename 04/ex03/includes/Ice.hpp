/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:08:55 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 13:13:44 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

class Ice : virtual public AMateria
{
	private:
		std::string	_type;
	public:
		Ice(void);
		Ice(Ice &other);
		~Ice(void);

		Ice &operator=(const Ice &other);

		AMateria*	clone(void);
		void 		use(ICharacter& target);
};