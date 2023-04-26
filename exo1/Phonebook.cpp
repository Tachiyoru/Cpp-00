/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:42:15 by sleon             #+#    #+#             */
/*   Updated: 2023/04/26 16:21:14 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

Contact Phonebook::get_contact(int i)
{
	return (phonebook[i]);
}

std::string	Phonebook::get_first_name(int i)
{
	return (phonebook[i].GetFirst());
}

std::string	Phonebook::get_last_name(int i)
{
	return (phonebook[i].GetLast());
}

std::string	Phonebook::get_nickname(int i)
{
	return (phonebook[i].GetNick());
}

std::string	Phonebook::get_number(int i)
{
	return (phonebook[i].GetNumber());
}

std::string	Phonebook::get_secret(int i)
{
	return (phonebook[i].GetSecret());
}
