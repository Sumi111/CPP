#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

class Contact 
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_no;
        std::string dark_secret;

        void set_firstname(std::string str);
        void set_lastname(std::string str);
        void set_nickname(std::string str);
        void set_phoneno(std::string str);
        void set_darksecret(std::string str);

    public:
        Contact();
        ~Contact();

        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phoneno();
        std::string get_darksecret();

        void        set_contact();
        void        show_contact();
    
};

#endif