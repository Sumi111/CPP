#include "Intern.hpp"

/****************************Constructors/Destructors****************************/
Intern::Intern(void)
{
	// std::cout << "Intern's Default constructor called" << std::endl;
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
	// std::cout << "Intern's Copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
	// std::cout << "Intern's Destructor called" << std::endl;
}

/****************************Operator overloding****************************/

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"shrubbery", "robotomy", "presidential"};
	funcPointer getForms[3] = {&Intern::getShrubbery, &Intern::getRobotomy, &Intern::getPresidential}; 
	
	try
    {
        for (int i = 0; i < 3; i++)
        {
			if (name.find(forms[i]) != std::string::npos)
			{
                std::cout << "Intern created " << name << " form" << std::endl;
                return (this->*getForms[i])(target);
            }
        }
		throw Intern::FormErrorException();
	} 
    catch (Intern::FormErrorException &e)
    {
		std::cout << e.what() << std::endl;
		return (NULL);
	}
}

/****************************Exceptions****************************/
char const *Intern::FormErrorException::what() const throw()
{
	return ("Could not create form!");
}

/****************************Getters/Setters****************************/
Form	*Intern::getShrubbery(std::string targ) const
{
	return (new(std::nothrow) ShrubberyCreationForm(targ));
}

Form	*Intern::getRobotomy(std::string targ) const
{
	return (new(std::nothrow) RobotomyRequestForm(targ));
}

Form	*Intern::getPresidential(std::string targ) const
{
	return (new(std::nothrow) PresidentialPardonForm(targ));
}
