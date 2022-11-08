#include "Form.hpp"

/****************************Constructors/Destructors****************************/
Form::Form():_name("XYZ"), is_signed(false), _gradeToSign(5), _gradeToExe(42)
{
	std::cout << "\033[32mForm's Default constructor called\033[0m" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExe):_name(name), is_signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
	std::cout << "\033[32mForm's Parameterized constructor called\033[0m" << std::endl;
	if (_gradeToSign < 1 || _gradeToExe < 1)
		throw Form::GradeTooLowException();
	else if (_gradeToSign > 150 || _gradeToExe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy): _name(copy._name), is_signed(copy.is_signed), _gradeToSign(copy._gradeToSign), _gradeToExe(copy._gradeToExe)
{
    std::cout << "\033[32mForm's Copy constructor called\033[0m" << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
    (std::string &)this->_name = ((Form &)rhs).getName();
    this->is_signed = ((Form &)rhs).getIsSigned();
	(int &)this->_gradeToSign = ((Form &)rhs).getGradeToSign();
	(int &)this->_gradeToExe = ((Form &)rhs).getGradeToExe();

    std::cout << "\033[32mForm's Copy assignment operator called\033[0m" << std::endl;
    return (*this);
}

Form::~Form()
{
	// std::cout << "\033[32mForm's Destructor called\033[0m" << std::endl;
}

/****************************Getters/Setters****************************/
std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->is_signed);
}

std::string Form::getIsSignedStr() const
{
	if (this->is_signed)
		return (" is signed");
	return(" is not signed");
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExe() const
{
	return (this->_gradeToExe);
}

/****************************Member Functions****************************/
void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= _gradeToSign && is_signed == false)
		is_signed = true;
	else
		throw Form::GradeTooLowException();
}

/****************************Exceptions****************************/
const char	*Form::GradeTooHighException::what() const throw() 
{
	return ("Form Grade too high!!");
}

const char	*Form::GradeTooLowException::what() const throw() 
{
	return ("Form Grade too low!!");
}

/****************************Operator overloding****************************/
std::ostream &operator<<(std::ostream &o, Form const &rhs) 
{
	o  << "Form            : " << rhs.getName() << " " << rhs.getIsSignedStr() << std::endl
		<< "Grade to Sign   : " << rhs.getGradeToSign() << std::endl
		<< "Grade to Execute: " << rhs.getGradeToExe() << std::endl;
	return (o);
}