#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern 
{	
	private:
		Form	*getShrubbery(std::string t) const;
		Form	*getRobotomy(std::string t) const;
		Form	*getPresidential(std::string t) const;
	public:
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);
		// Intern &operator=(Intern const &rhs);

		Form *makeForm(std::string name, std::string t);
		class FormErrorException : public std::exception 
        {
			public: virtual const char	*what() const throw();
		};
		typedef  Form *(Intern::*funcPointer)(std::string t)const;
};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);

#endif