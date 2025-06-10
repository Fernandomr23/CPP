/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:47:10 by fernando          #+#    #+#             */
/*   Updated: 2025/06/10 16:41:15 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	data;
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange&	operator=(const BitcoinExchange &other);

		std::string	similarDate(std::string& date);
		void			calculateExchange(const std::string& input);

		class	invalidDateException : public std::exception
		{
			private:
				std::string date;

			public:
				invalidDateException(std::string& _date) { this->date = "Error: bad input => " + _date; }
				virtual ~invalidDateException() throw() {}
				
				virtual const char* what() const throw()
				{
					return (this->date.c_str());
				}
		};	
};
