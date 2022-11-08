#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Officer", 1);
		Form f1("Form A", 5, 10);
		std::cout << "\n" << b1 << f1 << std::endl;
		b1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("intern", 150);
		Form f2("Form B", 151, 10);
		b2.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Intern", 150);
		Form f3("Form C", 5, 10);
		std::cout << "\n" << b3 << f3 << std::endl;
		b3.signForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
}