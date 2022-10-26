#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const &copy);
        Brain &operator=(Brain const &rhs);
        ~Brain(void);

        void setIdeas(std::string idea);
        std::string getIdea(int i) const;

};

#endif