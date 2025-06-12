/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:17:38 by fernando          #+#    #+#             */
/*   Updated: 2025/06/12 18:42:18 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv) {
	createContainers(argv);
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
	return "Error";
}

void	PmergeMe::createContainers(char **argv) {
	for (int i = 1; argv[i] != NULL; i++) {
		try
		{
			if (!isValidNumber(argv[i]) || std::count(deque.begin(), deque.end(), atoi(argv[i])))
				throw invalidNumberException();
			this->deque.push_back(atoi(argv[i]));
			this->list.push_back(atoi(argv[i]));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			this->deque.clear();
			this->list.clear();
			break ;
		}
	}
}

bool	PmergeMe::isValidNumber(char *argv) {
	for (int i = 0; argv[i]; i++) {
		if (!isdigit(argv[i])) {
			return (false);
		}
	}
	return (true);
}

static void	insertionSortDeque(std::deque<int>& dq, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = dq[i];
        int j = i - 1;
        while (j >= left && dq[j] > key) {
            dq[j + 1] = dq[j];
            --j;
        }
        dq[j + 1] = key;
    }
}

static void mergeInsertSortDeque(std::deque<int>& dq, int left, int right) {
    if (right - left + 1 <= 10) {
        insertionSortDeque(dq, left, right);
        return ;
    }

    int mid = (left + right) / 2;

    mergeInsertSortDeque(dq, left, mid);
    mergeInsertSortDeque(dq, mid + 1, right);

    std::deque<int> merged;
    std::merge(dq.begin() + left, dq.begin() + mid + 1,
               dq.begin() + mid + 1, dq.begin() + right + 1,
               std::back_inserter(merged));

    std::copy(merged.begin(), merged.end(), dq.begin() + left);
}

void	PmergeMe::sortDeque() {
	if (this->deque.empty())
		return ;
	mergeInsertSortDeque(this->deque, 0, this->deque.size() - 1);
}

void	PmergeMe::printDeque() {
	this->printContainer(this->deque);
}

void	PmergeMe::printList() {
	this->printContainer(this->list);
}