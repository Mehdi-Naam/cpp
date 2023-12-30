/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:44:42 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/21 19:24:22 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void) {
	std::cout << "Distracteur !!" << std::endl;
}

std::string getname(void) {
	
	std::string name;

	std::cin >> name;
	return name;
}

void Zombie::setname( std::string _name ) {

	this->name = _name;
}

void	Zombie::announce( void ) {

	std::cout << name << std::endl;
}
