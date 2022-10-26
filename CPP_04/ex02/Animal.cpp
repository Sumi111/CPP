#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "\033[32mAnimal's Default constructor called.\033[0m" << std::endl;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "\033[32mAnimal's Copy constructor called.\033[0m" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(Animal const &rhs)
{
    this->type = ((Animal &)rhs).getType();
    std::cout << "\033[32mAnimal's Copy assignment operator called.\033[0m" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "\033[32mAnimal's Destructor called.\033[0m" << std::endl;
}

/////////////////////////////////////////////////////////////////

void Animal::makeSound() const
{
    std::cout << "\033[1;92mRandom noise!!\033[0m" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
