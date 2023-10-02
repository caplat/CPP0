#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook( void ){

    return;
}

Phonebook::~Phonebook( void ){

    return;
}

void Phonebook::add_contact( void ){

   static int i = 0;

    if(i >= 8)
        i = 0;
    info[i].init_contact();
    i++; 
}

void Phonebook::display_contact( void ){

    int i = 0;

    while(i < 8)
    {
        std::cout << info[i].get_info(0);
        std::cout << info[i].get_info(1);
        std::cout << info[i].get_info(2);
        std::cout << info[i].get_info(3);
        std::cout << info[i].get_info(4);
        i++;
    }
}