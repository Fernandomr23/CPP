/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:56:49 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/15 18:26:46 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/time.h>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "./PmergeMe \"1 2 3 4 5\"" << std::endl;
        return (1);
    }
    PmergeMe pmergeMe(argv);

    if (!pmergeMe.getIsValid())
    return (1);
    
    struct timeval start, end;
    std::cout << "Before:  ";
    pmergeMe.printDeque();

    gettimeofday(&start, NULL);
    pmergeMe.sortDeque();
    gettimeofday(&end, NULL);
    
    double elapsedD = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec) * 1.0;
    pmergeMe.setDTime(elapsedD);
    
    gettimeofday(&start, NULL);
    pmergeMe.sortList();
    gettimeofday(&end, NULL);
    
    double elapsedL = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec);
    pmergeMe.setLTime(elapsedL);
    
    std::cout << "After:   ";
    pmergeMe.printList();

    pmergeMe.printTimes();
    return (0);
}