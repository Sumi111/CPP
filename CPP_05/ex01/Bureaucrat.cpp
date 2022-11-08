#include "Bureaucrat.hpp"
#include "Form.hpp"

/****************************Constructors/Destructors****************************/
Bureaucrat::Bureaucrat() : _name("Someone"), _grade(150)
{
    std::cout << "\033[32mBureaucrat's Default constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "\033[32mBureaucrat's Parameterized constructor called\033[0m" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
    std::cout << "\033[32mBureaucrat's Copy constructor called\033[0m" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    (std::string &)this->_name = ((Bureaucrat &)rhs).getName();
    this->_grade = ((Bureaucrat &)rhs).getGrade();
    std::cout << "\033[32mBureaucrat's Copy assignment operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "\033[32mBureaucrat's Destructor called\033[0m" << std::endl;
}

/****************************Getters/Setters****************************/
std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

/****************************Member Functions****************************/
void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name <<  " couldn't sign because" << e.what() << std::endl;
	}
}

/****************************Exceptions****************************/
const char	*Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Oops, Grade of bureaucrat too high!!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Oops, Grade of bureaucrat too low!!");
}

/****************************Operator overloding****************************/
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) 
{
	o  << rhs.getName() << " bureaucrat grade: " << rhs.getGrade() << std::endl;
	return (o);
}