/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:27:40 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 18:29:49 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void debug(void);	
		void info(void);	
		void warning(void);	
		void error(void);	
};