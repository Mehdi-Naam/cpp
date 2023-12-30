/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:59:09 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/21 21:58:28 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

	std::string str = "HI THIS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringRIF = str;
	std::cout << "The memory address of the string variable : " << &str << std::endl;
	std::cout << "The memory address held by stringPTR	  : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringRIF	  : " << &stringRIF << std::endl;
	std::cout << "		{VALUE}" << std::endl;
	std::cout << "The value of the string variable	  : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR	  : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringRIF	  : " << stringRIF << std::endl;
	
}
