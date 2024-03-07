
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
		std::string _av = av[1];
		if (_av.compare("input.csv")) {
			std::cout << "Error: '" << _av << "'" << std::endl;
			return 0;
		}
		data_(map);
		BitcoinExchange(_av, map);
	}
	return 0;
}

/*
	if the value is not a true_Number exception 

*/
