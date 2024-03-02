
#include "BitcoinExchange.hpp"

void dispaly( std::map<std::string , float> & map ){

	std::map<std::string, float>::iterator i = map.begin();
	std::map<std::string, float>::iterator e = map.end();
	for (std::map<std::string, float>::iterator x = i; x != e ; x++)
		std::cout << x->first << " " << x->second << std::endl;
}

int main(int ac, char *av[]) {


	if (ac != 1) {
		std::map<std::string, float> map;
		data_(map);
		// dispaly(map);
		// (void)av;
		BitcoinExchange(av[1], map);
	}
	return 0;
}
