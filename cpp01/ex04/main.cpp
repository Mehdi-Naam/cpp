#include <iostream>
#include <fstream>

int	ft_len(std::ifstream &file) {

	int i = 0;
	std::string line;

	while (getline(file, line, '\0')) {
		i++;
	}
	file.close();
	return (i);
}

int main(int ac, char **av) {

	if (ac < 5) {
		std::string infile = av[1];
		std::string fistav = av[2];
		std::string repl = av[3];
		std::ifstream filename;
		std::ofstream fileout;
		std::string text;
		std::string serch = fistav;
		std::string outfile = infile + ".reples";
		std::string line;
		std::string copy_line;
		std::string end_l;
		filename.open(infile);
		int len_l = ft_len(filename);
		filename.open(infile);
		fileout.open(outfile);
		int len = serch.length();
		for (int i = 0; i < len_l; i++) {
			getline(filename, line, '\0');
			int fst = 0;
			copy_line = line;
			int coe = 0;
			while (1){
				if (line.find(serch, fst) != std::string::npos)  {

					int len_w = line.find(serch, fst);
					std::string first_l = copy_line.substr(0, len_w - (len - 3) * coe);
					std::string	fist_serch = first_l + repl;
					fst = len_w + len;
					end_l = fist_serch + line.substr(fst, line.length());
					copy_line = end_l;
					coe++;
				}
				else 
					break ;
			}
			fileout << copy_line;
		}
		filename.close();
		fileout.close();
	}
}
