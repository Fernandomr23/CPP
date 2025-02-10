/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:08:55 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 13:13:44 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

class Cure : virtual public AMateria
{
	private:
		std::string	_type;
	public:
		Cure(void);
		Cure(Cure &other);
		~Cure(void);

		Cure &operator=(const Cure &other);

		AMateria*	clone(void);
		void 		use(ICharacter& target);
};