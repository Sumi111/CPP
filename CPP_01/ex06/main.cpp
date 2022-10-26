#include "Harl.hpp"

int getLevel(std::string level)
{
    std::string lst[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (level == lst[i])
            return (i + 1);
    }
    return (-1);
}

int main(int argc, char **argv)
{
    std::string level;
    Harl        harl;
    int         i;

    if (argc != 2)
    {
        std::cerr << "Wrong no. of arguments. Try: \"./Harl complain_level\"" << std::endl;
        exit (1);
    }
    level = argv[1];
    if (level.empty())
    {
        std::cerr << "Complaint level empty. Try again" << std::endl;
        exit (1);
    }
    i = getLevel(level);
    switch (i)
    {
    	case 1:
        	std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
    	case 2:
        	std::cout << "[ INFO ]" << std::endl;
        	harl.complain("INFO");
        	std::cout << std::endl;
    	case 3:
        	std::cout << "[ WARNING ]" << std::endl;
        	harl.complain("WARNING");
			std::cout << std::endl;
    	case 4:
        	std::cout << "[ ERROR ]" << std::endl;
        	harl.complain("ERROR");
        	std::cout << std::endl;
        	break ;
    	default:
        	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}