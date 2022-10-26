#include "contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

/////setters/////
void    Contact::set_firstname(std::string str)
{
    this->first_name = str;
    return ;
}

void    Contact::set_lastname(std::string str)
{
    this->last_name = str;
    return ;
}

void    Contact::set_nickname(std::string str)
{
    this->nick_name = str;
    return ;
}

void    Contact::set_phoneno(std::string str)
{
    this->phone_no = str;
    return ;
}

void    Contact::set_darksecret(std::string str)
{
    this->dark_secret = str;
    return ;
}

//////getters//////
std::string    Contact::get_firstname(void)
{
    return(this->first_name);
}

std::string    Contact::get_lastname(void)
{
    return(this->last_name);
}

std::string    Contact::get_nickname(void)
{
    return(this->nick_name);
}

std::string    Contact::get_phoneno(void)
{
    return(this->phone_no);
}

std::string    Contact::get_darksecret(void)
{
    return(this->dark_secret);
}

void    Contact::show_contact(void)
{
    std::cout << "\033[0;34mFirst Name    : \033[0m" << this->get_firstname() << std::endl;
    std::cout << "\033[0;34mLast Name     : \033[0m" << this->get_lastname() << std::endl;
    std::cout << "\033[0;34mNickname      : \033[0m" << this->get_nickname() << std::endl;
    std::cout << "\033[0;34mPhone Number  : \033[0m" << this->get_phoneno() << std::endl;
    std::cout << "\033[0;34mDarkest Secret: \033[0m" << this->get_darksecret() << std::endl;
}

void    Contact::set_contact(void)
{
    std::string str;

	if (std::cin.eof())
			return ;
	while (str.empty())
	{
       	std::cout << "Enter the first name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	this->set_firstname(str);
	str.erase();
	while (str.empty())
	{
		std::cout << "Enter the last name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
    this->set_lastname(str);
	str.erase();
	while (str.empty())
	{
		std::cout << "Enter his/her nickname: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	this->set_nickname(str);
	str.erase();
	while (str.empty())
	{
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
		for(int i = 0; i < (int)str.length(); i++)
		{
			if (isdigit(str[i]) == 0)
			{
				str.erase();
				break ;
			}
		}
	}
	this->set_phoneno(str);
	str.erase();
	while (str.empty())
	{
		std::cout << "Enter their darkest secret: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	this->set_darksecret(str);
	str.erase();
}
