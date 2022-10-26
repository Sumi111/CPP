#include "Dog.hpp"

Dog::Dog(void):b(new(std::nothrow) Brain())
{
    this->type = "Dog";
    b->setIdeas("Dog's idea");
    std::cout << "\033[33mDog's Default constructor called.\033[0m" << std::endl;
}

Dog::Dog(Dog const &copy):Animal()
{
    std::cout << "\033[33mDog's Copy constructor called.\033[0m" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = ((Dog &)rhs).getType();
    this->b = new Brain(*rhs.getBrain());	//deep copy
    std::cout << "\033[93mDog's Copy assignment operator called.\033[0m" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "\033[33mDog's Destructor called.\033[0m" << std::endl;
    delete b;
}

/////////////////////////////////////////////////////////////////

void Dog::makeSound() const
{
    std::cout << "\033[1;93mBark!! Bark!!\033[0m" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->b);
}