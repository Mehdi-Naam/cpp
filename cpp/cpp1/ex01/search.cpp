/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:40:51 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/20 22:57:15 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::search(int idx)
{
	std::string	fstname = contact::fstname;
	std::string	lstname = contact::lstname;
	std::string	nikname = contact::nikname;
	if (fstname.length() > 10){
		// if the length more than 10 replase to ..
		fstname[9] = '.';
		for (int i = 10; fstname[i]; i++)
			fstname[i] = '\0';
	}
	if (lstname.length() > 10){ 
		// if the length more than 10 replase to ..
		lstname[9] = '.';
		for (int i = 10; lstname[i]; i++)
			lstname[i] = '\0';
	}
	if (nikname.length() > 9){ 
		// if the length more than 10 replase to ..
		nikname[10] = '.';
		for (int i = 10; nikname[i]; i++)
			nikname[i] = '\0';
	}
	if (idx == 1) {

		std::cout << GREEN << "__________________________________________________"<< WHITE << std::endl;
		std::cout << GREEN << "|   " << RED << std::setw(1) << "idx" << GREEN << "|   " << RED << std::setw(10) << "fastname" << GREEN << "|   " << RED << std::setw(10) << "lastname" << GREEN << "|   " << RED << std::setw(10) << "nikname" << GREEN << "|" << WHITE << std::endl;
		std::cout << GREEN << "__________________________________________________"<< WHITE << std::endl;
		std::cout << GREEN << "|   " << WHITE << std::setw(3) << idx << GREEN << "|   " << WHITE << std::setw(10) << fstname << GREEN << "|   " << WHITE << std::setw(10) << lstname << GREEN << "|   " << WHITE << std::setw(10) << nikname << GREEN << "|" << WHITE << std::endl;
		std::cout << GREEN << "__________________________________________________"<< WHITE << std::endl;
	}
	else if (idx <= 8) {
		std::cout << GREEN << "|   " << WHITE << std::setw(3) << idx << GREEN << "|   " << WHITE << std::setw(10) << fstname << GREEN << "|   " << WHITE << std::setw(10) << lstname << GREEN << "|   " << WHITE << std::setw(10) << nikname << GREEN << "|" << WHITE << std::endl;
		std::cout << GREEN << "__________________________________________________"<< WHITE << std::endl;
	}
}
