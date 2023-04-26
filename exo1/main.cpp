/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:31 by sleon             #+#    #+#             */
/*   Updated: 2023/04/26 17:58:30 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"
#include "Contact.hpp"

int	FindInput(Phonebook *PB, int i, int n){
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	int			choice;
	std::string a;

	if (n == 1)
		i = 7;
	if (i == -1)
		return (std::cout << "No entry" << std::endl, 1);
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
		<< "|" << std::setw(10) << "Last Name" << "|" << std::setw(10)
		<< "Nickname" << "|" << std::endl;
	for (int j = 1; j < i + 2; j++)
	{
		FirstName = (*PB).get_first_name(j - 1);
		LastName = (*PB).get_last_name(j - 1);
		Nickname = (*PB).get_nickname(j - 1);
		if(FirstName.length() >= 10)
		{
			FirstName.resize(9);
			FirstName.resize(10, '.');
		}
		if(LastName.length() >= 10)
		{
			LastName.resize(9);
			LastName.resize(10, '.');
		}
		if(Nickname.length() >= 10)
		{
			Nickname.resize(9);
			Nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << j << "|" << std::setw(10) << FirstName
			<< "|" << std::setw(10) << LastName << "|" << std::setw(10) << Nickname
			<< "|" << std::endl;
	}
	std::cout << "Please chose an index among these" << std::endl;
	std::cin >> choice;
	if(std::cin.fail())
	{
		std::cout << "Your choice is incorrect" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (1);
	}
	else if (choice >=1 && choice <= i + 1)
		(*PB).get_contact(choice - 1).PrintContact();
	else
		std::cout << "Your choice is incorrect" << std::endl;
	std::cin.ignore();
	return (0);
}

int	Phonebook::FillPhoneBook(int i, std::string f, std::string l, std::string n,
	std::string pn, std::string d){
		if (phonebook[i].SetInfo(f, l, n, pn, d))
			return (1);
		std::cout << "Contact registered" << std::endl;
		return (0);
	}

int	NewInput(int nbr, Phonebook *PB){
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumbr;
	std::string	DarkSecret;

	std::cout << "Please enter contact's first name:\n> ";
	std::getline(std::cin, FirstName);
	if (std::cin.eof())
		return (1);
	std::cout << "Please enter contact's last name:\n> ";
	std::getline(std::cin, LastName);
	if (std::cin.eof())
		return (1);
	std::cout << "Please enter contact's nickname:\n> ";
	std::getline(std::cin, Nickname);
	if (std::cin.eof())
		return (1);
	std::cout << "Please enter contact's phone number:\n> ";
	std::getline(std::cin, PhoneNumbr);
	if (std::cin.eof())
		return (1);
	std::cout << "Please enter contact's darkest secret:\n> ";
	std::getline(std::cin, DarkSecret);
	if (std::cin.eof())
		return (1);
	if ((*PB).FillPhoneBook(nbr, FirstName, LastName, Nickname, PhoneNumbr, DarkSecret))
		return (1);
	return (0);
}

int	main(void){
	Phonebook	PB;
	std::string	input;
	int i = -1;
	int n = 0;

	std::cout << "Welcome in my Phonebook" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Chose a command : SEARCH | ADD | EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i == 7)
			{
				i = -1;
				n = 1;
			}
			if(NewInput((i + 1), &PB))
				std::cout << "Entry not registered" << std::endl;
			else
				i++;
		}
		else if (input == "SEARCH")
			FindInput(&PB, i, n);
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
