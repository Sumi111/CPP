#include "Data.hpp"

Data::Data()
{
	// std::cout << "Default constructor called" << std::endl;
}
        
Data::Data(std::string str)
{
	// std::cout << "Parameterized constructor called" << std::endl;
    this->s = str;
}

Data::~Data()
{
	// std::cout << "Destructor called" << std::endl;
}

Data::Data(const Data &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Data &Data::operator=(const Data &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
    this->s = rhs.s;
    return (*this);
}
//////////////////////////////////////////////////////////////////////////

uintptr_t serialize(Data* ptr)
{
    uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
    return (result);
}

Data* deserialize(uintptr_t raw)
{
    Data *d= reinterpret_cast<Data *>(raw);
    return (d);
}
//////////////////////////////////////////////////////////////////////////

void Data::printSalutation()
{
    std::cout << "Hello " << this->s << "!!!" << std::endl;
}