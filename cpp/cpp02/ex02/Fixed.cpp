#include "Fixed.hpp"

Fixed::Fixed() {

	this->fix_p = 0;
}

Fixed::Fixed(const int inc) {

	this->fix_p = inc << c_fix_p;
}

Fixed::Fixed(const float flc) {

	this->fix_p = roundf(flc * (1 << c_fix_p));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &copy) {

	this->fix_p = copy.fix_p;
}

Fixed&	Fixed::operator=(const Fixed &opr) {

	fix_p = opr.fix_p;
	return *this;
}

Fixed	Fixed::operator+(const Fixed &oprp) const {

	Fixed tmp;
	int fixp = fix_p + oprp.fix_p;
	tmp.setRawBits(fixp);
	return tmp;
}

Fixed&	Fixed::operator++(void) {

	fix_p++;
	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed tmp(*this);
	fix_p++;
	return tmp;
}

Fixed&	Fixed::operator--(void) {

	fix_p--;
	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed tmp(*this);
	fix_p--;
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &oprn) const {

	Fixed tmp;
	int fixp = fix_p - oprn.fix_p;
	tmp.setRawBits(fixp);
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &oprd) const {

	Fixed tmp;
	int fixp = fix_p / oprd.fix_p * (1 << c_fix_p);
	tmp.setRawBits(fixp);
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &oprmp) const {

	Fixed tmp;
	int fixp = (fix_p * oprmp.fix_p) / (1 << c_fix_p);
	tmp.setRawBits(fixp);
	return tmp;
}

bool	Fixed::operator==(const Fixed &opree) const {

	return fix_p == opree.fix_p;
}

bool	Fixed::operator!=(const Fixed &oprd) const {

	return fix_p != oprd.fix_p;
}

bool	Fixed::operator>=(const Fixed &oprge) const {

	return fix_p >= oprge.fix_p;
}

bool	Fixed::operator<=(const Fixed &oprme) const {

		return fix_p <= oprme.fix_p;
}

bool	Fixed::operator<(const Fixed &oprm) const {

		return fix_p < oprm.fix_p;
}

bool	Fixed::operator>(const Fixed &oprg) const {

		return fix_p > oprg.fix_p;
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

	return (fix_p);
}

void Fixed::setRawBits( int const raw ) {

	fix_p = raw;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {

	return (a > b) ? b : a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {

	return (a > b) ? b : a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {

	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {

	return (a > b) ? a : b;
}

