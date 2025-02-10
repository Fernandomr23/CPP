/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:48:10 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 12:59:22 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AMateria
{
	protected:
		std::string	_type;
		
	public:
		AMateria(void);
		AMateria(AMateria& other);
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		AMateria &operator=(const AMateria& other);

		std::string const	&getType() const;
		void const  		setType(std::string type) const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};