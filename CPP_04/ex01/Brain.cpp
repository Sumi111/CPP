#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "\033[34mBrain's Default constructor called.\033[0m" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << "\033[34mBrain's Copy constructor called.\033[0m" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(Brain const &rhs)
{
    for(int i = 0; i <  100; i++)
        this->ideas[i] = rhs.getIdea(i);
    std::cout << "\033[34mBrain's Copy assignment operator called.\033[0m" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "\033[34mBrain's Destructor called.\033[0m" << std::endl;
}

/////////////////////////////////////////////////////////////////

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    if ( i < 100 && i >= 0)
        return (this->ideas[i]);
    else
        return ("Wrong index");
}
