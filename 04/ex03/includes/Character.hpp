/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:08:55 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 10:14:58 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ICharacter.hpp>

class Character : public ICharacter
{
	private:
		std::string	_name;
		int			idx;
		AMateria*	slot[4];
		
	public:
		Character(void);
		Character(std::string name);
		Character(Character &other);
		~Character(void);

		Character &operator=(const Character &other);

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};