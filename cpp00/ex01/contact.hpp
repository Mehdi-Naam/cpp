#ifndef CONTACT_HPP
#define CONTACT_HPP

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define CYAN    "\033[0;36m"
# define MAG    "\033[1;35m"

#include <iostream>
#include <iomanip>

class  contact{
	private:
		std::string fstname;
		std::string lstname;
		std::string nikname;
		std::string dark_sk;
		std::string	number;
	public:
		void	getdata(void);
		void	print(int idx);
		void	search(int idx);
};

#endif