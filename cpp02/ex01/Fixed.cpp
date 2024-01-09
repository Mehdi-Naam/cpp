#include "Fixed.hpp"

Fixed::Fixed() {
	
	std::cout << "Default constructor called" << std::endl;
	this->fix_p = 0;
}

Fixed::Fixed(const int inc) {
	
	std::cout << "Default constructor called" << std::endl;
	this->fix_p = inc << c_fix_p;
}

Fixed::Fixed(const float flc) {
	
	std::cout << "Default constructor called" << std::endl;
	this->fix_p = roundf(flc * (1 << c_fix_p));
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

std::ostream&	operator<<(std::ostream &oprch, const Fixed fixd) {

	oprch << fixd.toFloat();
	return oprch;
}

float Fixed::toFloat( void ) const {

	return ((float)fix_p / (1 << c_fix_p));
}

int Fixed::toInt( void ) const {

	return (fix_p >> c_fix_p);
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (fix_p);
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "getRawBits member function called" << std::endl;
	fix_p = raw;
}
