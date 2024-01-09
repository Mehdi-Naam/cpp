/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:43:33 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/24 14:55:30 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::loop_contact(int j) {
	
	std::string str;
	for (int i = 1; i <= j; i++) {

		cont[i].search(i);
	}
	std::cout << YELLOW << "enter idx of the contact that you whant	: " << WHITE << std::flush;
	getline(std::cin, str);
	if (std::cin.eof() != 0) {
		std::cout << RED << "END OF FILE" << std::endl;
		exit(0);
	}
	if (check_dg(str) == 0) {
		std::cout << RED << "indxe not valide !!" << WHITE << std::endl;
		phonebook::loop_contact(j);
	}
	else{

		if (str[0] == '\0')
			phonebook::loop_contact(j);
		else {
			int idx = std::atoi(str.c_str());
			if (idx < 1 || idx > 9 || idx > j) {
				std::cout << RED << "indxe not valide !!" << WHITE << std::endl;
				phonebook::loop_contact(j);
			}
			else 
				cont[idx].print(idx);
		}	
	}
}

void	phonebook::ADD(int i){

	cont[i].getdata();
}

int main(){

	phonebook phb;
	std::string	salam;
	int i = 1;
	static int j;

	while (1) {

		std::cout << BLUE << "what do you whant?" << WHITE << "	: ADD\n" << "			: SEARCH\n" << "			: EXIT" << std::endl;
		std::cout << BLUE << "what do you whant?	" << WHITE << ": " << std::flush;
		getline(std::cin, salam);
		if (!salam.compare("ADD")){

			phb.ADD(i);
			i++;
			j++;
			if (i > 8)
				i = 1;
		}
		else if (!salam.compare("SEARCH"))
			phb.loop_contact(j);
		else if (!salam.compare("EXIT"))
			exit(0);
		if (std::cin.eof() != 0) {
			std::cout << RED << "END OF FILE" << std::endl;
			exit(0);
		}
	}
	return 0;
}
