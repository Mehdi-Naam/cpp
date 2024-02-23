#ifndef EASYFIND
#define EASYFIND

#include <iostream>
#include <algorithm>
#include <list>

template<typename T>
void	easyfind(T easy, int i) {
	if (find(easy.begin(), easy.end(), i) != easy.end())
		std::cout << "number is find" << std::endl;
	else
		std::cout << "number is not find" << std::endl;
}

#endif
