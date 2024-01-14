#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria	*_arr[4];
	public:
		Character();
		Character(std::string _name);
		Character(const Character& cpy);
		Character& operator=(const Character& Chopr);
		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		~Character();
	};

#endif
