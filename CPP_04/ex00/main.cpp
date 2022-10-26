#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    const WrongAnimal* meta_w = new WrongAnimal();
    const WrongAnimal* i_w = new WrongCat();
    std::cout << std::endl;

    i_w->makeSound(); //will output wrong sound
    meta_w->makeSound();
    std::cout << std::endl;

    delete i_w;
    delete meta_w;

return 0; 
}