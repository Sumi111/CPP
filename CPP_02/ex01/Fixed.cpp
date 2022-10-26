#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_pt = rhs.getRawBits();
	return *this;
}	

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
//////////////////////////////////////////////////////////////////

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_pt = n << fract_bits;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_pt = roundf(n * (1 << fract_bits));
}

float Fixed::getRawBits(void) const
{
	return (this->fixed_pt);
}

void Fixed::setRawBits(float raw)
{
	this->fixed_pt = raw;
}
//////////////////////////////////////////////////////////////////

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_pt / (float)(1 << fract_bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed_pt >> fract_bits);
}
