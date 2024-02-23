#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack( const MutantStack & cpy);
		MutantStack& operator=( const MutantStack & opr);

		typedef typename std::deque<T>::iterator itra;
		itra	first() {
			return this->c.begin();
		};
	
		itra	last()  {
			return this->c.end();
		};
	
		~MutantStack();
};

template <typename T>
MutantStack<T>::MutantStack( void ) {}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack & cpy) { *this = cpy; }

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack & opr) {

	if (this != &opr) 
		std::stack<T>::operator=(&opr);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {}


#endif
