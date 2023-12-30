/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:42:33 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/19 18:43:03 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	Zombie *zom;
	zom = newZombie( "mehdi" );
	zom->announce();
	zom->~Zombie();
	return 0;
}
