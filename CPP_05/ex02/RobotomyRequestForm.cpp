#include "RobotomyRequestForm.hpp"

/****************************Constructors/Destructors****************************/
RobotomyRequestForm::RobotomyRequestForm(void) : Form("XYZ", RSign, RExe), _target("Someone") 
{
	std::cout << "RobotomyRequestForm's Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, RSign, RExe), _target(target)
{
	std::cout << "RobotomyRequestForm's Parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
	*this = copy;
	std::cout << "RobotomyRequestForm's Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "RobotomyRequestForm's Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = ((RobotomyRequestForm &) rhs).getTarget();
	std::cout << "Copy asignment operator for RobotomyRequestForm called" << std::endl;
	return (*this);
}

/****************************Member Functions****************************/
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSignedBool())
		throw NotSignedException();
	if (executor.getGrade() > RExe)
		throw GradeTooLowException();
	std::cout << "Drrrrrrrrrrrrrrrrr!" << std::endl;
	srand((unsigned int)time(NULL));
	int randomNum = std::rand() % 2;
    if (randomNum)
	    std::cout << this->_target << " is robotomized!" << std::endl;
    else
	    std::cout << this->_target << " is not robotomized!" << std::endl;
}

/****************************Getters/Setters****************************/
std::string	RobotomyRequestForm::getTarget(void)
{
    return this->_target;
}
