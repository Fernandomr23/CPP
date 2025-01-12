/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:19:03 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/12 02:41:44 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->index = 0;
    this->valid = 0;
}

PhoneBook::~PhoneBook(void) {
}

void    PhoneBook::addContact(Contact contact, std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    contact.setName(first);
    contact.setLast(last);
    contact.setNick(nick);
    contact.setPhone(phone);
    contact.setSecret(secret);

    contacts[index] = contact;
    if (valid < 8)
        valid++;
    index = (index + 1) % 8;
}

void    PhoneBook::newContact(void)
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
        std::cout << "A contact can´t have empty fields" << std::endl;
    else
        this->addContact(contact, first, last, nick, phone, secret);
}

void    PhoneBook::showContact(void)
{
    int index;
    
    std::string str;
    std::cout << "Type the index you want to see" << std::endl;
    std::getline(std::cin, str);
    index = std::atoi(str.c_str());
    if ((index <= 0 || index > 8) || (index == 0 && str[0] != 0))
    {
        std::cout << "Selected Index is incorrect" << std::endl;
        return;
    }
    if (index > this->valid)
    {
        std::cout << "No contact found!" << std::endl;
        return;
    }
    index--;
    std::cout << "First Name: " << this->contacts[index].getName() << std::endl;
    std::cout << "Last Name: " << this->contacts[index].getLast() << std::endl;
    std::cout << "Nickname: " << this->contacts[index].getNick() << std::endl;
    std::cout << "Phone Number: " << this->contacts[index].getPhone() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].getSecret() << std::endl;
}

void    PhoneBook::showList(void)
{
    int i;
    std::string first, last, nick;
    std::cout <<"--- USER LIST ---" << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    i = 0;
    while (i < this->valid)
    {
        first = contacts[i].getName();
        if (first.length() > 9)
            first = first.substr(0, 9) + ".";
        last = contacts[i].getLast();
        if (last.length() > 9)
            last = last.substr(0, 9) + ".";
        nick = contacts[i].getNick();
        if (nick.length() > 9)
            nick = nick.substr(0, 9) + ".";
        std::cout << std::setw(10) << i + 1 << '|';
        std::cout << std::setw(10) << first << '|';
        std::cout << std::setw(10) << last << '|';
        std::cout << std::setw(10) << nick << '|' << std::endl;
        i++;
    }
    this->showContact();
}
