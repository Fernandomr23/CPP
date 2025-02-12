/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:45:43 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 10:46:22 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	slot[4];
		int			idx;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &other);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &other);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};