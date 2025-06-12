/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:17:38 by fernando          #+#    #+#             */
/*   Updated: 2025/06/12 21:18:09 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv) {
    this->dTime = 0;
    this->lTime = 0;
	createContainers(argv);
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other) {
	if (this == &other)
		return (*this);
        
	this->deque = other.deque;
	this->list = other.list;
    this->dTime = other.dTime;
    this->lTime = other.lTime;
    
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

void	PmergeMe::printDeque() {
	this->printContainer(this->deque);
}

void	PmergeMe::printList() {
	this->printContainer(this->list);
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

static void insertionSortList(std::list<int>& lst) {
    if (lst.size() < 2)
		return;
		
	std::list<int>::iterator it = lst.begin();
	++it;
    for (; it != lst.end(); it++) {
        int key = *it;
        std::list<int>::iterator j = it;
        std::list<int>::iterator prev;
        while (j != lst.begin()) {
			prev = j;
			--prev;
			if (*prev <= key)
				break ;
            *j = *prev;
            j = prev;
        }
        *j = key;
    }
}

static void mergeLists(std::list<int>& left, std::list<int>& right, std::list<int>& result) {
    result.clear();
    std::list<int>::iterator itL = left.begin();
    std::list<int>::iterator itR = right.begin();

    while (itL != left.end() && itR != right.end()) {
        if (*itL < *itR) {
            result.splice(result.end(), left, itL++);
        } else {
            result.splice(result.end(), right, itR++);
        }
    }
    result.splice(result.end(), left);
    result.splice(result.end(), right);
}

static void mergeInsertSortList(std::list<int>& lst) {
    if (lst.size() <= 10) {
        insertionSortList(lst);
        return;
    }

    std::list<int> left, right;
    std::list<int>::iterator mid = lst.begin();
    std::advance(mid, lst.size() / 2);

    left.splice(left.begin(), lst, lst.begin(), mid);
    right.splice(right.begin(), lst, lst.begin(), lst.end());

    mergeInsertSortList(left);
    mergeInsertSortList(right);

    mergeLists(left, right, lst);
}

void	PmergeMe::sortList() {
	if (this->list.empty())
		return ;
	mergeInsertSortList(this->list);
}

void    PmergeMe::printTimes() {
    std::cout << "Time to process a range of " << this->deque.size() << " elements with std::deque : "
        << std::fixed << std::setprecision(5) << this->dTime << " us" << std::endl;
    std::cout << "Time to process a range of " << this->list.size() << " elements with std::list  : "
        << std::fixed << std::setprecision(5) << this->lTime << " us" << std::endl;
}

void    PmergeMe::setDTime(double timeValue) {
    this->dTime = timeValue;
}

void    PmergeMe::setLTime(double timeValue) {
    this->lTime = timeValue;
}