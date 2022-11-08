#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Officer", 1);
		ShrubberyCreationForm f1("Form S1");
		RobotomyRequestForm f2("Form R1");
		PresidentialPardonForm f3("Form P1");
		std::cout << "\n" << b1  << f1  << f2  << f3 << std::endl;
		b1.signForm(f1);
		b1.executeForm(f1);
		std::cout << "\n";
		b1.signForm(f2);
		b1.executeForm(f2);
		std::cout << "\n";
		b1.signForm(f3);
		b1.executeForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("Intern", 150);
		ShrubberyCreationForm f2("Form S2");
		RobotomyRequestForm f3("Form R2");
		PresidentialPardonForm f4("Form P2");
		std::cout << "\n" << b2  << f2  << f3 << f4 << std::endl;
		b2.signForm(f2);
		b2.executeForm(f2);
		std::cout << "\n";
		b2.signForm(f3);
		b2.executeForm(f3);
		std::cout << "\n";
		b2.signForm(f4);
		b2.executeForm(f4);
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Someone", 47);
		ShrubberyCreationForm f3("Form S3");
		RobotomyRequestForm f4("Form R3");
		PresidentialPardonForm f5("Form P3");
		std::cout << "\n" << b3  << f3  << f4  << f5 << std::endl;
		b3.signForm(f3);
		b3.executeForm(f3);
		std::cout << "\n";
		b3.signForm(f4);
		b3.executeForm(f4);
		std::cout << "\n";
		b3.signForm(f5);
		
		b3.executeForm(f5);
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
}