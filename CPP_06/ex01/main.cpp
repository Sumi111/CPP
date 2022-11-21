#include "Data.hpp"

int main (void)
{
    Data *data_ptr = new Data("Sumi");
	std::cout << "\033[32mBefore serialization and deserialization\033[0m" << std::endl;
    data_ptr->printSalutation();

    uintptr_t test1 = serialize(data_ptr);
    Data *data_ptr1 = deserialize(test1);
	std::cout << "\033[32m\nAfter serialization and deserialization\033[0m" << std::endl;
    data_ptr1->printSalutation();

	uintptr_t test2 = serialize(data_ptr1);
    Data *data_ptr2 = deserialize(test2);
	std::cout << "\033[32m\nAfter serialization and deserialization one more time\033[0m" << std::endl;
    data_ptr2->printSalutation();
	
    delete data_ptr;
    return 0;
}

