/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:51:12 by sleon             #+#    #+#             */
/*   Updated: 2023/04/25 13:17:30 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Phonebook
{
public:
	int	number;
	Phonebook(void);
	~Phonebook(void);
	int	test(void);
};

class Contact
{
public:
	Contact(void);
	~Contact(void);
};

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->number = 0;
	this->test();
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Phonebook::test(void)
{
	std::cout << "test de test" << std::endl;
	return (0);
}

#endif
