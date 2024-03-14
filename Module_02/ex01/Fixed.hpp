
#pragma once

#include <iostream>

class Fixed
{
	private:
		int fixed ;
		static const int frac_ = 8;

	public:
		Fixed();
		Fixed(const int fi);
		Fixed(const float ff);
		Fixed(const Fixed &fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator = (const Fixed &other);
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);
