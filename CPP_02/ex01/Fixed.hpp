#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fixed_pt;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & copy);
		Fixed & operator=(Fixed const & rhs);
		~Fixed();

		Fixed(int const n);
		Fixed(float const n);

		float	getRawBits(void) const;
		void	setRawBits(float raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif