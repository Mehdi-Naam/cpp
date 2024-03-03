/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:10:18 by mehdismac         #+#    #+#             */
/*   Updated: 2024/02/19 16:57:14 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string _name ) {
	
	Zombie::name = _name;
}

Zombie::~Zombie(void) {

	std::cout << "Distracteur !!" << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// int main() {

// 	Zombie zom( "Foo");

// 	// zom.zambie( "Foo" );
// 	zom.announce();
// 	return (0);
// }
