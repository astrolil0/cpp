#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed = 0;
    std::cout << "Default consturctor called\n";
}
Fixed::Fixed(const int fi)
{
	std::cout << " Int constructor called\n";
	this->fixed = (fi <<  8);
}

Fixed::Fixed(const float ff)
{
	std::cout << "float constructor called\n";
	this->fixed = roundf(ff * 256);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	this->fixed = fixed.fixed;
}

Fixed::~Fixed()
{
	 std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout <<"getRawBits member function called\n";
	return(this->fixed);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed = raw;
}

float Fixed::toFloat( void ) const
{
	 return (float)(this->fixed) / 256;
}

int Fixed::toInt( void ) const
{
	return this->fixed >> frac_;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if(this->fixed != other.fixed)
		this->fixed = other.getRawBits();
		return(*this);
}
std::ostream &operator<<(std::ostream &o, const Fixed& fixed) {
	o << fixed.toFloat();
	return (o);
}
