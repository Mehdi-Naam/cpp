#include "MutantStack.hpp"

int main(int ac, char *av[]) {


	if (ac != 1) {
		MutantStack<int> Mstac;
		for (int i = 1; av[i]; i++) {
			Mstac.push(std::atoi(av[i]));
		}
		MutantStack<int>::itra	itt = Mstac.first();
		MutantStack<int>::itra	itb = Mstac.last();
		for (MutantStack<int>::itra i = itt; i != itb; i++) {
			std::cout << *i << std::endl;
		}
	}
	return 0;
}
