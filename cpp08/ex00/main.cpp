#include "easyfind.hpp"

int main(int ac, char **av) {
	if (ac == 2) {
		int arr[] = {2, 4, 7, 67, 234, 0, 234, 2, 6, 8};
		int size = sizeof(arr) / sizeof(int);

		std::vector < int > _vec(arr, arr + size);
		easyfind(_vec, std::atoi( av[1] ));
	
		// std::list < int > _lst(arr, arr + size);
		// easyfind(_lst, std::atoi( av[1] ));
	}
	return 0;
}
