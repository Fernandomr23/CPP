/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:52:14 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 17:46:23 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string name, std::string s1,  std::string s2) : _name(name), _s1(s1), _s2(s2) {
	this->file.open(_name.c_str());
}

File::~File(void) {
	this->file.close();
	this->newFile.close();
}

int	File::openFile(void) {
	return (this->file.is_open());
}

void	File::duplicateFile(std::string content)
{
	std::string line;
	this->newFile.open((this->_name + ".replace").c_str(), std::ios::out | std::ios::in | std::ios::trunc);
		this->newFile << content;
}

std::string	File::modifyFile(void)
{
	std::string 	content;
	std::string 	newContent;
	std::string 	line;
	unsigned int	i, size;
	
	while (getline(this->file, line)) {
		content += line + '\n';
	}
	i = 0;
	size = content.size();
	while (i < size)
	{
		if (content.find(this->_s1, i) == i) {
			newContent += this->_s2;
			i += this->_s1.size() - 1;
		}
		else
			newContent += content[i];
		i++;
	}
	return (newContent);
}