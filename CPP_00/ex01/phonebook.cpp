#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void    PhoneBook::add(int i)
{
    this->contacts[i].set_contact();
}

std::string shrink(std::string str)
{
    std::string tmp;

    tmp = str;
    if (tmp.length() > 10)
    {
        tmp.insert(9, ".");
        return (tmp.substr(0, 10));
    }
    return (str);
}

void    PhoneBook::search(void)
{
    int i = 0;
    std::string j;

	if (this->contacts[0].get_firstname().length() == 0)
	{
		std::cout << "Phonebok empty" << std::endl;
		return ;
	}
	if (std::cin.eof())
		exit (0);
    std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
    while (i < 8 && (this->contacts[i].get_firstname().length() != 0))
    {
        std::cout << "|" << std::setw(10) << i+1 << "|" << std::setw(10) << shrink(this->contacts[i].get_firstname()) 
            << "|" << std::setw(10) << shrink(this->contacts[i].get_lastname()) << "|"
            << std::setw(10) << shrink(this->contacts[i].get_nickname()) << "|" << std::endl;
        i++;
    }
    while (1)
    {
        std::cout << "Enter the index of required contact: ";
        std::getline(std::cin,j);
        if (std::cin.eof())
        {
            std::cout << std::endl;
		    exit(0);
        }
        if (j.length() == 1 && j[0] > '0' 
            && j[0] <= '8' && (contacts[(j[0]- '0')-1].get_firstname().length() != 0))
        {  
            this->contacts[(j[0]- '0')-1].show_contact();
            break;
        }
        else
            std::cout << "Not a valid index" << std::endl;
    }
	return ;
}
