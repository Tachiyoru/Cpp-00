/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:51:12 by sleon             #+#    #+#             */
/*   Updated: 2023/04/26 16:38:38 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

class Phonebook
{
	public	:
		Phonebook();
		~Phonebook();
		int	FillPhoneBook(int i, std::string f, std::string l, std::string n,
	std::string pn, std::string d);
		Contact get_contact(int i);
		std::string get_first_name(int i);
		std::string get_last_name(int i);
		std::string get_nickname(int i);
		std::string get_number(int i);
		std::string get_secret(int i);
	private	:
		Contact	phonebook[8];
};

#endif
