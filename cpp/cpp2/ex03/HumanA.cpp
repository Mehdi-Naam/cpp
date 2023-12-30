/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:33:58 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/23 02:34:22 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string HunA, Weapon &wapn) : type(wapn) {

	name = HunA;
	std::cout << RED << "constract of HumanA " << GREEN << "[" << name << "]" << WHITE << std::endl;
}

void	HumanA::attack() {
	
	std::cout << YELLOW << "attaacks with their " << type.getType() << WHITE << std::endl;
}
