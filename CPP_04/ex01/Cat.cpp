#include "Cat.hpp"

Cat::Cat(void):b(new Brain())
{
    this->type = "Cat";
    b->setIdeas("Cat's ideas");
    std::cout << "\033[31mCat's Default constructor called.\033[0m" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal()
{
    std::cout << "\033[31mCat's Copy constructor called.\033[0m" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = ((Cat &)rhs).getType();
    this->b = new Brain(*rhs.getBrain());
    std::cout << "\033[31mCat's Copy assignment operator called.\033[0m" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "\033[31mCat's Destructor called.\033[0m" << std::endl;
    delete b;
}

/////////////////////////////////////////////////////////////////

void Cat::makeSound() const
{
    std::cout << "\033[1;91mMeeooww!!\033[0m" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->b);
}