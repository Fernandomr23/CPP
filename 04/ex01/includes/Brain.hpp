/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:35:02 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/06 12:54:54 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain& other);
		virtual ~Brain(void);
		
		Brain	&operator=(const Brain& other);

		void		setIdea(std::string idea, int i);
		std::string	getIdea(int i);
		
	private:
		std::string ideas[100];	
};
