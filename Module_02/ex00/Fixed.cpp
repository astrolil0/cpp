#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "default constructor" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	this->fixed = fixed.fixed;
}

Fixed::~Fixed()
{
	std::cout <<"Destructor called\n";
}

Fixed &Fixed::operator = (const Fixed &others)
{
	std::cout << "Copy assignment operator called\n";
	if(this->fixed != others.fixed)
		this->fixed = others.getRawBits();
		return(*this);
}

int Fixed::getRawBits( void )const
{
	std::cout <<"getRawBits member function called\n";
	return(this->fixed);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed = raw;
}

