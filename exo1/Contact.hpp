/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:56:59 by sleon             #+#    #+#             */
/*   Updated: 2023/04/26 16:27:07 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


class Contact
{
public:
	Contact();
	~Contact();
	void	PrintContact();
	int	SetInfo(std::string f, std::string l, std::string n,
	std::string pn, std::string d);
	std::string GetFirst();
	std::string GetLast();
	std::string GetNick();
	std::string GetNumber();
	std::string GetSecret();
private:
	std::string _FName;
	std::string _LName;
	std::string _NName;
	std::string _Number;
	std::string _Secret;
};

#endif
