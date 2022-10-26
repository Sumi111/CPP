#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fixed_pt_n;
		static const int fract_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed & operator=(Fixed const &copy);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif