/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdismac <mehdismac@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:31:50 by mehdismac         #+#    #+#             */
/*   Updated: 2023/12/17 00:25:38 by mehdismac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>

class	phonebook {
	public:
		contact	cont[8];
		void	loop_contact(int j);
		void	ADD(int i);
} ;

int		check_dg(std::string dg);

#endif

