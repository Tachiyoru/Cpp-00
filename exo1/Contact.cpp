/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:56:56 by sleon             #+#    #+#             */
/*   Updated: 2023/04/26 16:26:25 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <stdio.h>

Contact::Contact()
{
}
Contact::~Contact()
{
}

std::string	Contact::GetFirst(){
	return (_FName);
}

std::string	Contact::GetLast(){
	return (_LName);
}

std::string	Contact::GetNick(){
	return (_NName);
}

std::string	Contact::GetNumber(){
	return (_Number);
}

std::string	Contact::GetSecret(){
	return (_Secret);
}

void Contact::PrintContact()
{
	std::cout << "First Name: " << this->_FName << std::endl;
	std::cout << "Last Name: " << this->_LName << std::endl;
	std::cout << "Nickname: " << this->_NName << std::endl;
	std::cout << "Phone Number: " << this->_Number << std::endl;
	std::cout << "Darkest Secret: " << this->_Secret << std::endl;
}


int	Contact::SetInfo(std::string f, std::string l, std::string n,
	std::string pn, std::string d){
		this->_FName = f;
		this->_LName = l;
		this->_NName = n;
		this->_Number = pn;
		this->_Secret = d;
		if (_FName == "\0")
			return (std::cout << "empty category" << std::endl, 1);
		if (_LName[0] == '\0')
			return (std::cout << "empty category" << std::endl, 1);
		if (_NName[0] == '\0')
			return (std::cout << "empty category" << std::endl, 1);
		if (_Number[0] == '\0')
			return (std::cout << "empty category" << std::endl, 1);
		if (_Secret[0] == '\0')
			return (std::cout << "empty category" << std::endl, 1);
		return(0);
	}
