#include "phonebook.hpp"

int main()
{
	PhoneBook 	phonebook; // instantiated as an instance of the PhoneBook
	std::string	user_ip;
	int			i = 0;

	while (!std::cin.eof())
	{
		std::cout << "\033[1;31m\n\tMY AWESOME PHONE_BOOK\033[0m" << std::endl;
		std::cout << "\033[0;33mCommands available: \033[0m\033[1;33mADD, SEARCH, EXIT\033[0m" << std::endl;
		std::getline(std::cin, user_ip);
		if (!strcasecmp(user_ip.c_str(), "ADD"))
		{
			phonebook.add(i);
			if (i == 7)
				i = 0;
			else
				i++;
		}
		else if (!strcasecmp(user_ip.c_str(), "SEARCH"))
			phonebook.search();
		else if (!strcasecmp(user_ip.c_str(), "EXIT"))
			return (0);
		else
			continue ;
	}
	return (0);
}
