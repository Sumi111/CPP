#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool 				is_signed;
		int const			_gradeToSign;
		int const			_gradeToExe;
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExe);
		Form(Form const &copy);
        Form &operator=(Form const &rhs);
		~Form();

		void beSigned(Bureaucrat &b);

		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;
		std::string	getIsSignedStr() const;

		class GradeTooHighException :public std::exception
        {
            public: virtual const char *what() const throw();
        };
        class GradeTooLowException :public std::exception
        {
            public:virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif