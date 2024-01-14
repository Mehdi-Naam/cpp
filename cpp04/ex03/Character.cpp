#include "Character.hpp"

Character::Character() {

	for (int i = 0; i < 4; i++)
		_arr[i] = NULL;
}

Character::Character(std::string name) : _name(name) {

	for ( int i = 0; i < 4; i++ )
		_arr[i] = NULL;
}

Character::Character(const Character& cpy) : _name(cpy._name) {

	for (int i = 0; i < 4; i++)
		_arr[i] = cpy._arr[i];
}

Character& Character::operator=(const Character& Chopr) {

	if (this != &Chopr)
	{
		_name = Chopr._name;
		for (int i = 0; i < 4; i++)
			_arr[i] = Chopr._arr[i];
	}
	return *this;
}

void	Character::equip(AMateria* m) {

	for (int i = 0; i < 4; i++) {

		if (_arr[i] == NULL) {
			_arr[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {

	if (idx >= 0 && idx < 4)
		_arr[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx <= 4 && _arr[idx])
		_arr[idx]->use(target);
}

std::string const& Character::getName() const {

	return _name;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete _arr[i];
}
