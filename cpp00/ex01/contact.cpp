/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:31:05 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/18 17:05:23 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::print(int idx){

	std::cout << CYAN << "	contact	" << WHITE << "[" << idx << "]" << std::endl;
	std::cout << MAG << "First name	: " << WHITE << contact::fstname << std::endl; // print the first name
	std::cout << MAG << "Last name	: " << WHITE << contact::lstname << std::endl; // print the last name
	std::cout << MAG << "Nikname		: " << WHITE << contact::nikname << std::endl; // print the nikname
	std::cout << MAG << "Darkest secret	: " << WHITE << contact::dark_sk << std::endl; // print the darkest secret
	std::cout << MAG << "Number		: " << WHITE << contact::number << std::endl; // print the number
}

int	check_dg(std::string dg){

	for(int i = 0; dg[i]; i++){
		if (!isdigit(dg[i]))
			return (0);
	}
	return (1);
}

void	contact::getdata(void) {

	bool	flag;

	do {
		flag = false;
		std::cout << GREEN << "fist name	: " << WHITE << std::flush;
		getline(std::cin, contact::fstname); // reading single and multiple line string from the input stream the first name
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
		if (!contact::fstname[0])
			flag = true;
	}
	while (flag);
	do {
		flag = false;
		std::cout << GREEN << "last name	: " << WHITE << std::flush;
		getline(std::cin, contact::lstname); // reading single and multiple line string from the input stream the first name
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
		if (!contact::lstname[0])
			flag = true;
	}
	while (flag);
	do {
		flag = false;
		std::cout << GREEN << "nikname		: " << WHITE << std::flush;
		getline(std::cin, contact::nikname); // reading single and multiple line string from the input stream the first name
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
		if (!contact::nikname[0])
			flag = true;
	}
	while (flag);
	do {
		flag = false;
		std::cout << GREEN << "darkest secret	: " << WHITE << std::flush;
		getline(std::cin, contact::dark_sk); // reading single and multiple line string from the input stream the first name
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
		if (!contact::dark_sk[0])
			flag = true;
	}
	while (flag);
	do {
		flag = false;
		std::cout << GREEN << "number		: " << WHITE << std::flush;
		getline(std::cin, contact::number); // reading single and multiple line string from the input stream the first name
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
		if (!contact::number[0] || check_dg(contact::number) == 0)
			flag = true;
	}
	while (flag);
}
