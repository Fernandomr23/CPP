/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:17:38 by fernando          #+#    #+#             */
/*   Updated: 2025/06/11 18:34:42 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::string& input) {
	createContainers(input);
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other) {
	if (this == &other) {
		return (*this);
	}
	this->deque = other.deque;
	this->list = other.list;
	
	return (*this);
}

const char* PmergeMe::invalidNumberException::what() const throw() {
	return "Invalid number";
}

void	PmergeMe::createContainers(const std::string &input) {
	std::istringstream	iss(input);
	int					num;

	while (iss >> num) {
		this->deque.push_back(num);
		this->list.push_back(num);
	}
}

void	PmergeMe::printContainers() {
	std::cout << "Deque: ";
	for (size_t i = 0; i < this->deque.size(); i++) {
		std::cout << this->deque[i] << " ";
	} 

	// std::cout << "List: ";
	// for (int i = 0; i < this->list.size(); i++) {
	// 	std::cout << this->list[i] << " ";
	// }
}