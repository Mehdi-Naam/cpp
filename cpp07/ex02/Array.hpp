#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int _n;
		T* _array;
	public:
		class message : public std::exception {
			public :
				const char *what() const throw();
		};
		Array();
		Array(unsigned int n);
		Array(const Array & cpy);
		Array&	operator=(const Array & opr);
		T&	operator[](unsigned int opr) const;
		unsigned int	size();
		~Array();
};

template < typename T >
Array<T>::Array() : _n(0), _array(new T()) {}

template < typename T >
Array<T>::Array(const Array & cpy) : _n(cpy._n) {

	_array = new T[_n];
	for (unsigned int i = 0; i < _n; i++) {
		_array[i] = cpy._array[i];
	}
}

template < typename T >
Array<T>::Array(unsigned int n) : _n(n), _array(new T[_n]) {}

template < typename T >
const char *Array<T>::message::what() const throw() {

	const char *str = "we hade a exception here";
	return str;
}

template < typename T >
Array<T>&	Array<T>::operator=(const Array & opr) {

	if (this != &opr) {
		delete[] _array;
		_n = opr._n;
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; i++) {
			_array[i] = opr._array[i];
		}
	}
	return *this;
}

template < typename T >
T&	Array<T>::operator[](unsigned int opr) const {

	if (opr > _n) 
		throw message();
	return _array[opr];
}

template < typename T >
unsigned int	Array<T>::size() {
	return _n;
}

template < typename T >
Array<T>::~Array() {
	delete[] _array;
}

template < typename T >
std::ostream& operator<<(std::ostream& oprch, const Array<T> array) {
	oprch << array._n;
	for (unsigned int i = 0; i < array._n; i++)
		oprch << array[i] << " " << std::flush;
	return oprch;
}

#endif