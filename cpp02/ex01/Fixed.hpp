
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
		int getRawBits( void ) const ;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
};
	std::ostream& operator<<(std::ostream& oprch, const Fixed fixd);
