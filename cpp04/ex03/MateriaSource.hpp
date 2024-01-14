#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		std::string _type;
		AMateria	*_arr[4];
	public:
		MateriaSource();
		MateriaSource(std::string _type);
		~MateriaSource();
		MateriaSource(const MateriaSource& Mscpy);
		MateriaSource& operator=(const MateriaSource& MSopr);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
};

#endif