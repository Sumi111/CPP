#ifndef CONVERTOR_HPP
#define CONVERTOR_HPP

#include <iostream>
#include <string>
#include <iomanip> 
#include <cstdlib>

#define INVALID	0
#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

class convertor
{
	private:
		std::string str;
		int		i;
		char	c;
		float	f;
		double	d;
		char	*s1;	//to use atoi, atof...
		double	s;		//to identify psedo literals 0-f and 1-d
		int		type;	//to identify type
		
	public:
		convertor();
		convertor(std::string str);
		convertor(const convertor &cpy);
		convertor &operator=(const convertor &obj);
		~convertor();

		void getType();
		void printValues();
		int count(std::string s, char c);

		void setInvalid();
		void setChar();
		void setInt();
		void setFloat();
		void setDouble();

		typedef void (convertor::*funcPointer)();
};

#endif