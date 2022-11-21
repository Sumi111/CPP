#include "convertor.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Need 2 arguments. Try again!!!" << std::endl;
		return (1);
	}
	
	std::string c = argv[1];
	try
	{
		convertor convert(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
