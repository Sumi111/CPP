#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "contact.hpp"

class PhoneBook
{
        Contact contacts[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void    add(int i);
        void    search(void);
};

#endif