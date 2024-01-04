#include "Fixed.hpp"

Fixed::Fixed() {
	
	this->fix_p = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->fix_p = copy.fix_p;
}

Fixed&	Fixed::operator=(const Fixed &opr) {

	std::cout << "Copy assignment operator called" << std::endl;
	fix_p = opr.fix_p;
	return *this;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (fix_p);
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "getRawBits member function called" << std::endl;
	fix_p = raw;
}

