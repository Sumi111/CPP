#include "ShrubberyCreationForm.hpp"

/****************************Constructors/Destructors****************************/
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("S_form", GSign, GExe), target("s_target")
{
    std::cout << "ShrubberyCreationForm's Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, GSign, GExe), target(target)
{
    std::cout << "ShrubberyCreationForm's Parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
    *this = copy;
    std::cout << "ShrubberyCreationForm's copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->target = ((ShrubberyCreationForm &) rhs).getTarget();
    std::cout << "ShrubberyCreationForm's copy assignement operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    // std::cout << "ShrubberyCreationForm's Desturctor constructor called" << std::endl;
}

/****************************Getters/Setters****************************/
std::string ShrubberyCreationForm::getTarget()
{
    return (this->target);
}

/****************************Member Functions****************************/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSignedBool())
        throw Form::NotSignedException();
    if (executor.getGrade() > GExe)
        throw Form::GradeTooLowException();
    std::ofstream file((this->target + "_shrubbery").c_str());
    if(!file.is_open() || !file.good())
    {
        file.close();
        throw FileErrorException();
    }
    file << std::string("         _-_			\n" 
						"	    _-   -_		    \n" 
						"     _-       -_	    \n" 
						"   _-           -_  	\n" 
						" _-  _-      -_   -_	\n" 
						"	-    \\  /   -		\n" 
						"	      | | 		    \n" 
						"	      | |   		\n"
						"	     /  \\			\n");
    file.close();
}

/****************************Exceptions****************************/

char const *ShrubberyCreationForm::FileErrorException::what() const throw()
{
	return ("File error!");
}