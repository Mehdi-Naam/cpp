#include "BitcoinExchange.hpp"
#include <cctype>

int checkYear(int year)
{
    if (year % 400 == 0) {
        return 1;
    }
    else if (year % 100 == 0) {
        return 0;
    }
    else if (year % 4 == 0) {
        return 1;
    }
    return 0;
}

int		manth(std::string mat) {

	if (mat.length() != 2)
		return 0;
	for (size_t i = 0; i < mat.length(); i++) {
		if (!isdigit(mat[i]))
			return 0;
	}
	int check = std::atoi(mat.c_str());
	if (check > 12 || check <= 0)
		return 0;
	return 1;
}

int		day(std::string dy, std::string &mat, std::string &year) {

	int	arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (checkYear(std::atoi(year.c_str())))
		arr[2] = 29;
	if (std::atoi(year.c_str()) < 2009 || std::atoi(mat.c_str()) < 1 || std::atoi(dy.c_str()) < 2)
		return 0;
	for (size_t i = 0; i < dy.length(); i++) {
		if (!isdigit(dy[i]))
			return 0;
	}
	for (size_t i = 0; i < year.length(); i++) {
		if (!isdigit(year[i]))
			return 0;
	}
	int check = std::atoi(dy.c_str());
	if (arr[std::atoi(mat.c_str())] < check || check <= 0)
		return 0;
	return 1;
}

int		parsing_date(std::string date) {

	if (!isdigit(date[0])) {
		std::cout << "Error: in year." << std::endl;
		return 0;
	}
	int i = 0;
	while (date[i] != '-') {
		i++;
	}
	std::string year = date.substr(0, i);
	if (year.length() != 4) {
		std::cout << "Error: in year." << std::endl;
		return 0;
	}
	int befor_dach = date.find('-', 0);
	int it = befor_dach + 1;
	while (date[it] != '-')
		it++;
	std::string mat = date.substr(befor_dach + 1, it - (befor_dach + 1));
	if (!manth(mat)) {
		std::cout << "Error: in manth." << std::endl;
		return 0;
	}
	std::string dy = date.substr(it + 1, date.length());
	if (!day(dy, mat, year) || (dy.length() > 2)) {

		std::cout << "Error2: in day." << dy << std::endl;
		return 0;
	}
	return 1;
}

int		parsing_valour(std::string &val) {

	char *ptr_d;
	float check = std::strtod(val.c_str(), &ptr_d);
	if (*ptr_d)
	{
		std::cout << "Error: bad input" << std::endl;
		return 0;
	}
	if (check < 0) {

		std::cout << "Error: not a positive number." << std::endl;
		return 0;
	}
	if (check > 1000) {

		std::cout << "Error: too large a number." << std::endl;
		return 0;
	}
	return 1;
}

size_t	spc(std::string &line) {
	size_t i;
	for (i = 0; i < line.length(); i++) {
		if (line[i] != ' ' && line[i] != '\t')
			break;
	}
	return i;
}

void	BitcoinExchange(std::string _av, std::map<std::string, float> &map) {

	std::ifstream	infile;
	std::string		line;
	int flag = 0;
	infile.open(_av);
	getline(infile, line, '\n');
	if (line.compare("date | value")) {
		std::cout << "no head!!" << std::endl;
		flag = 1;
	}
	if (flag) {
		infile.close();
		infile.open(_av);
	}
	while (getline(infile, line, '\n')) {
		if (line.empty())
			continue ;
		size_t i = spc(line);
		if (i == line.length())
			continue ;
		if (line.find('|', i) != std::string::npos) {
			int befor_pip = line.find('|', i);
			std::string date = line.substr(i, befor_pip - i - 1);
			std::string val = line.substr(befor_pip + 1, line.length());
			if (val.empty()) {
				std::cout << "Error: Empty valour" << std::endl;
				continue ;
			}
			if (parsing_date(date) && parsing_valour(val)) {
				float valour = std::atof(val.c_str());
				std::map<std::string, float>::iterator iter = map.lower_bound(date);
				if (iter->first != date && iter != map.begin())
					iter--;
				std::cout << date << " => " << valour << " = " << iter->second * valour << std::endl;	
			}
		}
		else
			std::cout << "Error: bad input => " << line << std::endl;
	}
}

void	data_(std::map<std::string, float> &map) {

	std::ifstream	infile;
	std::string		line;
	infile.open("data.csv");
	getline(infile, line, '\n');
	while (getline(infile, line, '\n')) {
		if (line.find(',', 0) != std::string::npos) {
		
			int befor_pip = line.find(',', 0);
			std::string date = line.substr(0, befor_pip);
			std::string val = line.substr(befor_pip + 1, line.length());
			float valour = std::atof(val.c_str());
			map[date] = valour;
		}
	}
}
