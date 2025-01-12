/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:33:40 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/12 01:54:55 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::setName(std::string first) {
	this->firstName = first;
}

void	Contact::setLast(std::string last) {
	this->lastName = last;
}

void	Contact::setNick(std::string nick) {
	this->nickname = nick;
}

void	Contact::setPhone(std::string phone) {
	this->phoneNumber = phone;
}

void	Contact::setSecret(std::string secret) {
	this->darkestSecret = secret;
}

const std::string	Contact::getName(void) {
	return (this->firstName);
}

const std::string	Contact::getLast(void) {
	return (this->lastName);
}

const std::string	Contact::getNick(void) {
	return (this->nickname);
}

const std::string	Contact::getPhone(void) {
	return (this->phoneNumber);
}

const std::string	Contact::getSecret(void) {
	return (this->darkestSecret);
}
