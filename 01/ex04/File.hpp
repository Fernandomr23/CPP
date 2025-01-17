/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:49:24 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 17:43:22 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <fstream>

class File
{
	public:
		std::string	modifyFile(void);
		int			openFile(void);
		void		duplicateFile(std::string content);
		File(std::string name, std::string s1,  std::string s2);
		~File(void);
	private:
		std::string 	_name;
		std::string 	_s1;
		std::string 	_s2;
		std::ifstream	file;
		std::fstream	newFile;
};

#endif