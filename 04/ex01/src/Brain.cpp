/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:37:37 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 12:06:44 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void) {
	std::cout << "Brain created with default constructor" << std::endl;
}

Brain::Brain(Brain &other) {
	*this = other;
	std::cout << "Brain created with copy" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
	std::copy(other.ideas, other.ideas + 100, this->ideas);
	return (*this);
}

void	Brain::setIdea(std::string idea, int i) {
	if (i >= 0 && i <= 100)
		this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) {
	if (i >= 0 && i <= 100)
		return (this->ideas[i]);
	return (NULL);
}