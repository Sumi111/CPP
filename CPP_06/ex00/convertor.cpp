#include "convertor.hpp"

/****************************Constructors/Destructors****************************/
convertor::convertor()
{
	// std::cout << "Convertor's Default constructor called" << std::endl;
}
convertor::~convertor()
{
	// std::cout << "Convertor's Destroctor called" << std::endl;
}

convertor::convertor(const convertor &cpy)
{
	// std::cout << "Convertor's Copy constructor called" << std::endl;
    *this = cpy;
}

convertor& convertor::operator=(const convertor &obj)
{
    this->str = obj.str;
    this->c = obj.c;
    this->i = obj.i;
    this->f = obj.f;
    this->d = obj.d;
    this->s = obj.d;
    this->type = obj.type;
    return (*this);
}

convertor::convertor(std::string str)
{
	this->str = str;
	this->s1 = &str[0];
	getType();
	if (this->type != INVALID)
    {
		funcPointer t[5];
		t[0] = &convertor::setInvalid;
    	t[1] = &convertor::setChar;
        t[2] = &convertor::setInt;
        t[3] = &convertor::setFloat;
        t[4] = &convertor::setDouble;
        for(int i = 0; i < 5; i++)
        {
            if (this->type == i)
			{
                (this->*t[i])();
			}
        }
        printValues(); 
    }
    else
        std::cout << "Value is not a valid type!!! Try again."<<std::endl;
}

int convertor::count(std::string s, char c)
{
	int ct = 0;
	for(unsigned long i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
			ct++;
	}
	return (ct);
}

void convertor::getType()
{
	int p = 0;
	int f = 0, f_ct;
	int l = str.length();
	int flag = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		s = 0;
		this->type = FLOAT;
		return ;
	}
	else if (str == "-inf" || str == "+inf" || str == "nan")
	{
		s = 1;
		this->type = DOUBLE;
		return ;
	}
	this->s = 2;
	if (l == 1 && isprint(str[0]) && !isdigit(str[0]))
	{
		this->type = CHAR;
		this->c = str[0];
	}
	else
	{
		p = count(str, '.');
		f = str.find("f");
		f_ct = count(str, 'f');
		if (p > 1 || f_ct > 1)
		{
			this->type = INVALID;
			return ;
		}
		else
		{
		for(int i = 0; i < l; i++)
		{
			if (isdigit(str[i]) || (str[0] == '+' || str[0] == '-') || str[i] == '.')
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		for(int i = 0; i < l; i++)
		{
			if (isdigit(str[i]) || (str[0] == '+' || str[0] == '-') || str[i] == '.')
			{
				if (str[0] == '+' || str[0] == '-')
				{
					for(int j = 1; j < l; j++)
						if(!isdigit(str[j]) && str[j] != '.')
						{
							this->type = INVALID;
							return ;
						}
				}
				if (p == 0 && flag == 1)
				{
					this->type = INT;
					this->i = atoi(this->s1);
					return ;
				}
				else if (str[i] == '.' && isdigit(str[i + 1]) && f >= 0)
				{
					for(int j = i+1; j < l; j++)
					{
						if ((!(isdigit(str[j]) || str[j] == 'f') && p == 0) || f != (l-1))
						{
							this->type = INVALID;
							return ;
						}
					}
					this->type = FLOAT;
					this->f = atof(this->s1);
					return;
				}
				else if (str[i] == '.' && isdigit(str[i + 1]) && f < 0)
				{
					for(int j = i+1; j < l; j++)
					{
						if (!isdigit(str[j]))
						{
							this->type = INVALID;
							return ;
						}
					}
					this->type = DOUBLE;
					this->d = atof(this->s1);
					return ;
				}
			}
			else
			{
				this->type = INVALID;
				return ;
			}
		}
		}
	}
}

void convertor::printValues()
{
	if (this->s == 0)
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << this->str << std::endl;
		std::cout << "double: " << this->str.substr(0, this->str.length() -1)  << std::endl;
	}
	else if (this->s == 1)
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << this->str << "f" << std::endl;
		std::cout << "double: " << this->str << std::endl;
	}
	else
	{
		if (this->type == 1 || (this->i > 32 && this->i < 127))
			std::cout << "char: "  << this->c << std::endl;
		else
			std::cout << "char: "  << "Non displayable" << std::endl;
		std::cout << "int: " << this->i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << this->f << "f" << std::endl;
		std::cout << "double: " << this->d << std::endl;
	}
}

/****************************Member Functions****************************/
void convertor::setInvalid()
{
	std::string str = this->str;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (this->setFloat());
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (this->setDouble());
}

void convertor::setChar()
{
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->c);
	this->d = static_cast<double>(this->c);
}

void convertor::setInt()
{
	this->c = static_cast<char>(this->i);
	this->f = static_cast<float>(this->i);
	this->d = static_cast<double>(this->i);
}

void convertor::setFloat()
{
	this->c = static_cast<char>(this->f);
	this->i = static_cast<int>(this->f);
	this->d = static_cast<double>(this->f);
}

void convertor::setDouble()
{
	this->c = static_cast<char>(this->d);
	this->i = static_cast<float>(this->d);
	this->f = static_cast<double>(this->d);
}