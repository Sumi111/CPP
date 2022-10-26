#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_pt = 0;
}

Fixed::Fixed(Fixed const & copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_pt = rhs.getRawBits();
	return *this;
}	

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

////////////////////////////////////////////////////////////

Fixed::Fixed(int const n)
{
	// std::cout << "Int constructor called" << std::endl;
	fixed_pt = n << fract_bits;
}

Fixed::Fixed(float const n)
{
	// std::cout << "Float constructor called" << std::endl;
	fixed_pt = roundf(n * (1 << fract_bits));
}

////////////////////////////////////////////////////////////

float Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_pt);
}

void Fixed::setRawBits(int raw)
{
	this->fixed_pt = raw;
}

int Fixed::toInt(void) const
{
	return (this->fixed_pt >> fract_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_pt / (float)(1 << fract_bits));
}

////////////////////////////////////////////////////////////

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
////////////////////////////////////////////////////////////

bool Fixed::operator>(Fixed const &rhs) 
{
	return (this->fixed_pt > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) 
{
	return (this->fixed_pt < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) 
{
	return (this->fixed_pt >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) 
{
	return (this->fixed_pt <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) 
{
	return (this->fixed_pt == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) 
{
	return (this->fixed_pt != rhs.getRawBits());
}
////////////////////////////////////////////////////////////

Fixed Fixed::operator+(Fixed const &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}
////////////////////////////////////////////////////////////

Fixed Fixed::operator++(void)  //Pre increment
{
	++this->fixed_pt;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	--this->fixed_pt;
	return (*this);
}

Fixed Fixed::operator++(int)	//Post increment
{
	Fixed x = *this;
	this->fixed_pt++;
	return (x);
}

Fixed Fixed::operator--(int)
{
	Fixed x = *this;
	this->fixed_pt--;
	return (x);
}
////////////////////////////////////////////////////////////

Fixed const &Fixed::max(Fixed &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}