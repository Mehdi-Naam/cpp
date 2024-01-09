/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:47:04 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/11 21:28:48 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[]) {
	 
	if (ac > 1)
	{
		for(int i = 1; av[i]; i++){
			std::string s = av[i];
			for (int i = 0; s[i] ; i++){
				char c = toupper(s[i]);
				std::cout << c << std::flush;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}