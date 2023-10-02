#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
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

    std::cout << std::right << std::setw(10) << "Index" << '|';
    std::cout << std::setw(10) << "First_name" << '|';
    std::cout << std::setw(10) << "Last_name" << '|';
    std::cout << std::setw(10) << "Nickname" << '|' << std::endl;
    while(i < 8)
    {
        std::cout << std::right << std::setw(10) << i + 1 << '|';
        std::string trunc_first = info[i].get_info(0);
        if(trunc_first.length() > 10){

            trunc_first = trunc_first.substr(0 ,10);
            trunc_first[9] = '.';
        }
        std::string trunc_last = info[i].get_info(1);
        if(trunc_last.length() > 10){

            trunc_last = trunc_last.substr(0 ,10);
            trunc_last[9] = '.';
        }
        std::string trunc_nick = info[i].get_info(2);
        if(trunc_nick.length() > 10){

            trunc_nick = trunc_nick.substr(0 ,10);
            trunc_nick[9] = '.';
        }
        std::cout << std::right << std::setw(10) << trunc_first << '|';
        std::cout << std::right << std::setw(10) << trunc_last << '|';
        std::cout << std::right << std::setw(10) << trunc_nick << '|' << std::endl;
        i++;
    }
    std::cout << std::endl;
    std::string index_str;
    int index;
    while (true) {
        
        std::cout << "Pour plus d'info tapez l'index correspondant (entre 1 et 8) : ";
        std::getline(std::cin, index_str);
        index = std::atoi(index_str.c_str());
        if (index >= 1 && index <= 8) {
            if (!info[index - 1].get_info(0).empty())
                break;
            else 
                std::cout << "L'entrée à l'index " << index << " est vide. Veuillez réessayer." << std::endl;
        }
        else 
            std::cout << "Entree invalide. Veuillez entrer un numéro entre 1 et 8." << std::endl;
    }
    std::cout << "First_name : " << info[index - 1].get_info(0) << std::endl;
    std::cout << "Last_name : " << info[index - 1].get_info(1) << std::endl;
    std::cout << "Nickname : " << info[index - 1].get_info(2) << std::endl;
    std::cout << "Phone_number : " << info[index - 1].get_info(3) << std::endl;
    std::cout << "Darkest_secret : " << info[index - 1].get_info(4) << std::endl;   
}
