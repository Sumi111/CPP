#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
	private:
		std::string s;
	public:
		Data(void);
		Data(std::string str);
		Data(Data const &copy);
		~Data();
		Data &operator=(Data const &rhs);
		
		void printSalutation();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif