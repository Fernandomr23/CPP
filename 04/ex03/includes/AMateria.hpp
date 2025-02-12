/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:48:10 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 11:41:13 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <ICharacter.hpp>

class AMateria
{
	protected:
		std::string	_type;
		
	public:
		AMateria(void);
		AMateria(const AMateria& other);
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		AMateria &operator=(const AMateria& other);

		std::string const	&getType(void) const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif