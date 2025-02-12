/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:08:55 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 11:19:28 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <AMateria.hpp>

class Ice : public AMateria
{
	private:
		std::string	_type;
	public:
		Ice(void);
		Ice(Ice &other);
		~Ice(void);

		Ice &operator=(const Ice &other);

		AMateria*	clone(void) const;
		void 		use(ICharacter& target);
};