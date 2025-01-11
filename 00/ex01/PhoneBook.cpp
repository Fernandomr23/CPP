/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:19:03 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/11 19:39:13 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructor Called" << std::endl;
    this->index = 0;
    this->valid = 0;
    return ;
}

void    PhoneBook::addContact(void)
{
    Contact     contact;
    std::string first, last, nick, phone, secret;
       
    std::cout << "--- ADD A NEW USER ---" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, first);
    std::cout << "Last Name: ";
    std::getline(std::cin, last);
    std::cout << "Nickname: ";
    std::getline(std::cin, nick);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phone);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, secret);
    if (first.empty() || last.empty() || nick.empty() || phone.empty() || secret.empty())
    {
        std::cout << "A contact can´t have empty fields" << std::endl;
        return ;
    }
    contact.setContact(first, last, nick, phone, secret);
    contacts[index] = contact;
    if (valid < 8)
        valid++;
    index = (index + 1) % 8;
}

void    PhoneBook::showContacts(void)
{
    int i;

    i = 0;
    while (i < valid)
    {
        std::cout << "--- USER [" << i + 1 << "] ---" << std::endl;
        contacts[i].getContact();
        i++;
    }
}