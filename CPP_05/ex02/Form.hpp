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
		virtual ~Form();

		void beSigned(Bureaucrat &b);

		std::string getName() const;
		std::string	getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;
		bool		getIsSignedBool() const;

		class GradeTooHighException :public std::exception
        {
            public: virtual const char *what() const throw();
        };
        class GradeTooLowException :public std::exception
        {
            public:virtual const char *what() const throw();
        };
		class NotSignedException : public std::exception {
			public: virtual const char	*what() const throw();
		};
		class SignedException : public std::exception {
			public: virtual const char	*what() const throw();
		};
		
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif