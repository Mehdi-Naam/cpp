/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:24:09 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/21 19:24:27 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {

	if (N < 0)
		exit (0);
	Zombie	*zom = new Zombie[N];
	for (int i = 0; i < N; i++)
		zom[i].setname(name);
	return (zom);
}