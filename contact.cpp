#include <iostream>
#include "contact.hpp"

Contact::Contact( void ){

    return;
}

Contact::~Contact( void ){

    return;
}

void    Contact::init_contact(){

    std::cout << "First_name" << std::endl;
    std::getline(std::cin, this->first_name);

    std::cout << "Last_name" << std::endl;
    std::getline(std::cin, this->last_name);

    std::cout << "Nickname" << std::endl;
    std::getline(std::cin, this->nickname);

    std::cout << "Phone_number" << std::endl;
    std::getline(std::cin, this->phone_number);

    std::cout << "Darkest_secret" << std::endl;
    std::getline(std::cin, this->darkest_secret);

    std::cout << "Entrer ADD, SEARCH ou EXIT" << std::endl;
}

std::string Contact::get_info(int nb){

    if(nb == 0)
        return Contact::first_name;
    if(nb == 1)
        return Contact::last_name;
    if(nb == 2)
        return Contact::nickname;
    if(nb == 3)
        return Contact::phone_number;
    else
        return Contact::darkest_secret; 

}