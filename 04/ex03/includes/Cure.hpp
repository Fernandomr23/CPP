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

#pragma once

#include <AMateria.hpp>

class Cure : public AMateria
{
	private:
		std::string	_type;
		
	public:
		Cure(void);
		Cure(Cure &other);
		~Cure(void);

		Cure &operator=(const Cure &other);

		std::string const	&getType(void) const;
		AMateria*			clone(void) const;
		void 				use(ICharacter& target);
};