#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);
		
        void		execute(Bureaucrat const &executor) const;
		std::string	getTarget(void);
};

#endif