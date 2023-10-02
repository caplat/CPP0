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
    this->first_name.clear();
    this->last_name.clear();
    this->nickname.clear();
    this->phone_number.clear();
    this->darkest_secret.clear();
    while(this->first_name.empty()){
        
        std::getline(std::cin, this->first_name);
        if(this->first_name.empty())
            std::cout << "Vous ne pouvez laisser le champ vide, veuillez reessayer." << std::endl;
    }
    std::cout << "Last_name" << std::endl;
    while(this->last_name.empty()){

        std::getline(std::cin, this->last_name);
        if(this->last_name.empty())
            std::cout << "Vous ne pouvez laisser le champ vide, veuillez reessayer." << std::endl;
    }
    std::cout << "Nickname" << std::endl;
    while(this->nickname.empty()){

        std::getline(std::cin, this->nickname);
        if(this->nickname.empty())
            std::cout << "Vous ne pouvez laisser le champ vide, veuillez reessayer." << std::endl;
    }
    std::cout << "Phone_number" << std::endl;
    while(this->phone_number.empty()){

        std::getline(std::cin, this->phone_number);
        if(this->phone_number.empty())
            std::cout << "Vous ne pouvez laisser le champ vide, veuillez reessayer." << std::endl;
    }
    std::cout << "Darkest_secret" << std::endl;
    while(this->darkest_secret.empty()){

        std::getline(std::cin, this->darkest_secret);
        if(this->darkest_secret.empty())
            std::cout << "Vous ne pouvez laisser le champ vide, veuillez reessayer." << std::endl;
    }
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