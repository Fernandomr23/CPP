/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:55:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/12 21:16:52 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iomanip>

class PmergeMe
{
    private:
        std::deque<int>		deque;
        std::list<int>		list;
        double              dTime;
        double              lTime;
    
    public:
        PmergeMe(char **argv);
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);

        PmergeMe &operator=(const PmergeMe &other);

        void    setDTime(double timeVal);
        void    setLTime(double timeVal);

		void	createContainers(char **argv);
        bool    isValidNumber(char *argv);
        
		void	sortList();
        void    printList();
        
		void	sortDeque();
        void    printDeque();

        void    printTimes();
        
		template <typename Container>
        void printContainer(const Container& container)
        {
            if (container.empty())
                return;

            typename Container::const_iterator it;
            int count = container.size() > 9 ? 0 : -1;

            for (it = container.begin(); it != container.end(); it++) {
                std::cout << (*it) << " ";
                if (count != -1) {
                    count++;
                    if (count == 9) {
                        std::cout << "[...]";
                        break;
                    }
                }
            }
            std::cout << std::endl;
        }
        
        class invalidNumberException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
