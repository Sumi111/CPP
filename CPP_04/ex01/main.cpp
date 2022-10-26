#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << std::endl;

    delete j;
    delete i;//should not create a leak delete i;
	std::cout << "//////////////////////////////////////////\n" << std::endl;

    Dog *t1 = new Dog();
    std::cout << t1->getBrain()->getIdea(0) <<std::endl;
    t1->getBrain()->setIdeas("Chase cats...");
    std::cout << t1->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

    Dog *t2 = new Dog(*t1);
    std::cout << t2->getBrain()->getIdea(1) << std::endl;
    std::cout << t1->getBrain()->getIdea(99) << std::endl;
	std::cout << std::endl;

    delete t2;
    delete t1;
	std::cout << "//////////////////////////////////////////\n" << std::endl;
	
    Cat *t3 = new Cat();
    std::cout << t3->getBrain()->getIdea(0) <<std::endl;
    t3->getBrain()->setIdeas("Chase rats...");
    std::cout << t3->getBrain()->getIdea(0) <<std::endl;
	std::cout << std::endl;

    delete t3;
    std::cout << "//////////////////////////////////////////\n" << std::endl;

    Animal *a[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }

    for (int i = 0; i < 10; i++)
        delete a[i];
    return 0;
}