#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *b;
    public:
        Dog(void);
		Dog(Dog const &copy);
		Dog &operator=(Dog const &rhs);
		virtual ~Dog(void);

        void makeSound() const;
        Brain *getBrain() const;

};

#endif