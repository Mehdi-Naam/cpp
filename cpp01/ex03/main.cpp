/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:39:37 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/23 02:48:47 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
	{
		Weapon club = Weapon("sniper");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Gun T024");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("sniper");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Gun T024");
		jim.attack();
	}
	return 0;
}
