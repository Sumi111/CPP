#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_pt;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed & operator=(Fixed const &rhs);
		~Fixed();

		Fixed(int const n);
		Fixed(float const n);

		float	getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;

		bool operator>(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);

		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);

		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed const &max(Fixed &a, Fixed const &b);
		static Fixed const &min(Fixed &a, Fixed const &b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif