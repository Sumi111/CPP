#include "PresidentialPardonForm.hpp"

/****************************Constructors/Destructors****************************/
PresidentialPardonForm::PresidentialPardonForm(void) : Form("Form_P", PSign, PExe), _target("Someone")
{
	std::cout << "PresidentialPardonForm's Default constructor for called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, PSign, PExe), _target(target)
{
	std::cout << "PresidentialPardonForm's Parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
	*this = copy;
	std::cout << "PresidentialPardonForm's Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "PresidentialPardonForm's Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_target = ((PresidentialPardonForm &) rhs).getTarget();
	std::cout << "PresidentialPardonForm's Copy asignment operator called" << std::endl;
	return (*this);
}

/****************************Member Functions****************************/
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSignedBool())
		throw NotSignedException();
	if (executor.getGrade() > PExe)
		throw GradeTooLowException();
	std::cout << this->_target  << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/****************************Getters/Setters****************************/
std::string	PresidentialPardonForm::getTarget(void) 
{
    return this->_target;
}