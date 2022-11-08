#include "Bureaucrat.hpp"

int main()
{
    try
    {
    	Bureaucrat b1;
        std::cout << b1 << std::endl;
        b1.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "-----------------------------------------" << std::endl;
    try
    {
    	Bureaucrat b2("Tester", 1);
        std::cout << b2 << std::endl;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "-----------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Intern", 151);
        std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------" << std::endl;
}