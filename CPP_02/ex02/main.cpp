#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a   :" << a << std::endl;
	std::cout << "++a :" << ++a << std::endl;
	std::cout << "a   :" << a << std::endl;
	std::cout << "a++ :" << a++ << std::endl;
	std::cout << "a   :" << a << std::endl;
	
	std::cout << "b   :" << b << std::endl;
	std::cout << "max :" << Fixed::max(a, b) << std::endl;

	// std::cout << "--a :" << --a << std::endl;
	// std::cout << "a   :" << a << std::endl;
	// std::cout << "a-- :" << a-- << std::endl;
	// std::cout << "a   :" << a << std::endl;
	// std::cout << "a-b :" << a - b << std::endl;
	// std::cout << "a+b :" << a + b << std::endl;
	// std::cout << "a*b :" << a * b << std::endl;
	// std::cout << "a++ :" << a++ << std::endl;
	// std::cout << "a/a :" << a / a << std::endl;
	// std::cout << "a   :" << a << std::endl;

	// std::cout << "max :" << Fixed::max(a, b) << std::endl;
	// std::cout << "min :" << Fixed::min(a, b) << std::endl;

	return 0;
}