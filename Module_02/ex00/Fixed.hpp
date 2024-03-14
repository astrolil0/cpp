
#pragma once

#include "iostream"

class Fixed
{
	private:
		int fixed ;
		static const int frac_ = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator = (const Fixed &others);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};
