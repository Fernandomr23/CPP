/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:56:42 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 17:02:35 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>

class Zombie {
	
	public:
	
	void	announce(void);
	void	setName(std::string name);
	Zombie(void);
	~Zombie(void);

	private:
	
	std::string	name;
};

#endif
