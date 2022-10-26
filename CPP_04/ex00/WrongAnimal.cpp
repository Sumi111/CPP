#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal's Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal's Copy constructor called." << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = ((WrongAnimal &)rhs).getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Destructor called." << std::endl;
}

/////////////////////////////////////////////////////////////////

void WrongAnimal::makeSound() const
{
    std::cout << "Unberable noise!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
