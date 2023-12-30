/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:15:11 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/23 02:45:40 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	_wapn): type(_wapn) {
}

void	Weapon::setType(std::string _type) {

	type = _type;
}

const std::string	&Weapon::getType() {

	return (type);
}
