#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *b;
    public:
        Cat(void);
		Cat(Cat const &copy);
		Cat &operator=(Cat const &rhs);
		virtual ~Cat(void);

        void makeSound() const;
        Brain *getBrain() const;

};

#endif