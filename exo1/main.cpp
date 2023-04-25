/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:31 by sleon             #+#    #+#             */
/*   Updated: 2023/04/25 14:52:46 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"



int	main(void)
{
	Phonebook	PB;
	std::string	input;

	std::cout << "Welcome in my Phonebook" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Chose a command : SEARCH | ADD | EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		if (input == "SEARCH")
		if (input == "EXIT")
	}
	// std::cout << std::setw(10);
	// std::cout << 77 << std::endl;
	return (0);
}
