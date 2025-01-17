/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:31:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 17:43:42 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char **argv)
{
	std::string content;
	
	if (argc != 4) {
		std::cout << "Example: " << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}

	File	newFile(argv[1], argv[2], argv[3]);
	if (!newFile.openFile()) {
		std::cout << "Error: can´t open the file" << std::endl;
		return (1);
	}
	content = newFile.modifyFile();
	newFile.duplicateFile(content);
	return (0);
}