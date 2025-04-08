/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:52:40 by fmorenil          #+#    #+#             */
/*   Updated: 2025/04/08 16:35:23 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack &other) : std::stack<T>(other) { 
			*this = other;
		}
		MutantStack&	operator=(const MutantStack &other) {
			std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack(void) {}
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void) { return (this->c.begin()); }
		iterator	end(void) { return (this->c.end()); }
			
};
