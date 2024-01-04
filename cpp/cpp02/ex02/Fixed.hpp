
#include <iostream>

class Fixed
{
	private:
		int 				fix_p;
		static const int	c_fix_p = 8;
	public:
		Fixed();
		Fixed(const int inc);
		Fixed(const float flc);
		Fixed(const Fixed &copy);

		Fixed& operator=(const Fixed& opr);
	
		Fixed operator+(const Fixed& oprp) const;
		Fixed operator-(const Fixed& oprn) const;
		Fixed operator/(const Fixed& oprpd) const;
		Fixed operator*(const Fixed& oprpmp) const;
	
		bool operator>(const Fixed& oprg) const;
		bool operator<(const Fixed& oprm) const;
		bool operator<=(const Fixed& oprme) const;
		bool operator>=(const Fixed& oprge) const;
		bool operator!=(const Fixed& oprd) const;
		bool operator==(const Fixed& opree) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
	
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

		int getRawBits( void ) const ;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
};
std::ostream& operator<<(std::ostream& oprch, const Fixed fixd);
