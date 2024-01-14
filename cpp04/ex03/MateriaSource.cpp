#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		_arr[i] = NULL;
}

MateriaSource::MateriaSource(std::string type) : _type(type) {
	
	for (int i = 0; i < 4; i++)
		_arr[i] = NULL;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		delete _arr[i];
}

MateriaSource::MateriaSource(const MateriaSource& MScpy) {

	_type = MScpy._type;
	for (int i = 0; i < 4; i++)
		_arr[i] = MScpy._arr[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& MSopr) {

	if (this != &MSopr) {

		_type = MSopr._type;
		for (int i = 0; i < 4; i++)
			_arr[i] = MSopr._arr[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* MS) {

	for(int i = 0; i < 4; i++) {
		if (_arr[i] == NULL)
		{
			_arr[i] = MS->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {

	for (int i = 0; i < 4; i++)
	{
		if (_arr[i])
		{
			if (_arr[i]->getType() == type)
				return(_arr[i]->clone());
		}
	}
	return (NULL);
}
