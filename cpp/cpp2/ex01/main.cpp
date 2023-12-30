/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:23:15 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/21 20:50:30 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	Zombie *zom;
	zom = zombieHorde(4, "mehdi");
	for (int i = 0; i < 4; i++)
		zom[i].announce();
	delete []zom;
}
