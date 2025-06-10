/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:34:29 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/10 15:46:25 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <cstdlib>
#include <iomanip>

static bool isValidDate(const std::string& date)
{
    if (date.length() > 11 || date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
            return false;
    }
    return true;
}

BitcoinExchange::BitcoinExchange() 
{
    std::ifstream   file("data.csv");
    std::string     line;

    if (!file.is_open()) {
        std::cerr << "Error: could not open data file." << std::endl;
        return ;
    }

    while (std::getline(file, line)) {
        std::string date = line.substr(0, line.find(','));
        if (!isValidDate(date))
            continue ;
        float value = atof(line.substr(line.find(',') + 1).c_str());
        data[date] = value;
    }    
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;    
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other) {
        this->data = other.data;
    }
    return (*this);
}

std::string    BitcoinExchange::similarDate(std::string& date)
{
    std::map<std::string, float>::iterator it = this->data.lower_bound(date);
    
    if (it == this->data.begin() && it->first > date)
    {
        return (it->first);
    }

    while (it != this->data.end())
    {
        if (it->first > date)
            break;
        it++;
    }
    --it;
    return (it->first);
}

static void isValidValue(float value)
{
    if (value < 0)
        throw std::invalid_argument("Error: not a positive number.");
    if (value > 1000)
        throw std::invalid_argument("Error: too large a number.");
}

void    BitcoinExchange::calculateExchange(const std::string& input)
{
    std::ifstream   file(input.c_str());
    std::string     line;

    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }

    while (std::getline(file, line)) {
        try
        {
            std::string date = line.substr(0, line.find('|'));
            std::string valueDate;
            
            if (date == "date ")
                continue ;
            if (!isValidDate(date) || date.size() == line.size())
                throw invalidDateException(date);
            
            if (this->data.find(date) == this->data.end())
                valueDate = similarDate(date);
            else
                valueDate = date;
                
            float value = atof(line.substr(line.find('|') + 1).c_str());
            isValidValue(value);
            
            std::cout << date << " => " << std::fixed << std::setprecision(2) 
                      << value << " = " << value * this->data[valueDate] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }  
}