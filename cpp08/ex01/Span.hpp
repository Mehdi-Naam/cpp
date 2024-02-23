#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
	private:
		unsigned int _N;
		std::vector <int> _vec;
	public:
		class massage : public std::exception {
			public:
				const char *what() const throw();
		};
		Span();
		Span(unsigned int N);
		Span(const Span & cpy);
		int 	shortestSpan();
		int 	longestSpan();
		void	addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last);
		void	addNumber(const int& num);
		Span	&operator=(const Span & opr);
		~Span();
};

#endif
