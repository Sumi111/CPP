#include "Intern.hpp"

int main()
{
	try
	{
		
		Bureaucrat b1("Intern", 150);
		Intern x1;
		Form *f1 = x1.makeForm("shrubbery" ,"Form S1");
		Form *f2 = x1.makeForm("robotomy", "Form R1");
		Form *f3 = x1.makeForm("presidential", "Form P1");
		Form *f4 = x1.makeForm("xyz", "Form xyz1");

		std::cout << "\n" << b1  << *f1  << *f2 << *f3 << std::endl;
		b1.signForm(*f1);
		b1.executeForm(*f1);
		std::cout << "\n";
		b1.signForm(*f2);
		b1.executeForm(*f2);
		std::cout << "\n";
		b1.signForm(*f3);
		b1.executeForm(*f3);

		delete f1;
		delete f2;
		delete f3;
		delete f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("Junior", 50);
		Intern x1;
		Form *f1 = x1.makeForm("shrubbery" ,"Form S1");
		Form *f2 = x1.makeForm("robotomy", "Form R1");
		Form *f3 = x1.makeForm("presidential", "Form P1");
		Form *f4 = x1.makeForm("abc", "Form abc1");
		
		b2.signForm(*f1);
		b2.executeForm(*f1);
		b2.signForm(*f2);
		b2.executeForm(*f2);
		std::cout << "\n";
		b2.signForm(*f3);
		b2.executeForm(*f3);
		delete f1;
		delete f2;
		delete f3;
		delete f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
	}
	std::cout << "---------------------------------------" << std::endl;
}