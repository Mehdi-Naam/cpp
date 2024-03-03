/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:42:33 by mehdismac         #+#    #+#             */
/*   Updated: 2024/02/19 16:58:28 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

void	l() {
	system("leaks Zomdie");
}

int main() {

	atexit(l);
	Zombie *zom;
	zom = newZombie( "mehdi" );
	zom->announce();
	// zom->~Zombie();
	delete zom;
	return 0;
}
