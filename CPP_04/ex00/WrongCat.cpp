#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "W_cat";
    std::cout << "WrongCat's Default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal()
{
    std::cout << "WrongCat's Copy constructor called." << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    this->type = ((WrongCat &)rhs).getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Destructor called." << std::endl;
}

/////////////////////////////////////////////////////////////////

void WrongCat::makeSound() const
{
    std::cout << "Hissss!!" << std::endl;
}