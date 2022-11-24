#include "Array.hpp"

int main()
{
	std::cout << "INT ARRAY" << std::endl;
	Array<int> a1(10);
	Array<int> a2;

	for (int i = 0; i < 10; i++)
		a1[i] = i + 1;
	a2 = a1;

	std::cout << "a1: ";
	for (int i = 0; i < 10; i++)
		std::cout << a1[i] << "  ";
	std::cout << std::endl;

	std::cout << "a2: ";
	for (int i = 0; i < 10; i++)
		std::cout << a1[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;
	
	try
	{
		a1[-5] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		a1[5] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "a1: ";
	for (int i = 0; i < 10; i++)
		std::cout << a1[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;
	
	Array<int> a3(a1);
	std::cout << "a3: ";
	for (int i = 0; i < 10; i++)
		std::cout << a3[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;
	
	std::cout << "STRING ARRAY" << std::endl;
	Array<std::string> b1(3);
	Array<std::string> b2;
	
	b1[0] = "abc";
	b1[1] = "xyz";
	b1[2] = "ijk";
	b2 = b1;

	std::cout << "b1: ";
	for (int i = 0; i < 3; i++)
		std::cout << b1[i] << "  ";
	std::cout << std::endl;

	std::cout << "b2: ";
	for (int i = 0; i < 3; i++)
		std::cout << b1[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;
	
	try
	{
		b1[-5] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b1[2] = "mno";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "b1: ";
	for (int i = 0; i < 3; i++)
		std::cout << b1[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;
	
	Array<std::string> b3(b1);
	std::cout << "b3: ";
	for (int i = 0; i < 3; i++)
		std::cout << b3[i] << "  ";
	std::cout << "\n---------------------------------------------------" << std::endl;

}

