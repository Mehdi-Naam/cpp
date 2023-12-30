/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:58:13 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/27 17:04:39 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int ft_true(std::string level)
{
	if (!level.compare("DEBUG") || !level.compare("INFO") || !level.compare("WARNING") || !level.compare("ERROR"))
		return 1;
	return 0;
}

void Harl::complain(std::string level) {

	// CONDITION TO BE SURE OF THE LEVEL
	if (!ft_true(level))
		return ;
	void (Harl::*hrl[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	Harl salam;

	int x = -1;
	switch(level[0]) {
		case 'D':
			x = 0;
			break ;
		case 'I':
			x = 1;
			break ;
		case 'W':
			x = 2;
			break ;
		case 'E':
			x = 3;
			break ;
		default :
			std::cout << "try agine" << std::endl;
	}
	(salam.*hrl[x])();
}

int main(int ac, char **av) {

	if (ac != 2)
		return (0);
	Harl salam;
	std::string _av = av[1];
	salam.complain( _av );
}