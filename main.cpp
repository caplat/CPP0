#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    std::string commande;
    Phonebook instance;
    int test = 0;

    while(1)
    {
        if (test == 0)
            std::cout << "Entrer ADD, SEARCH ou EXIT" << std::endl;
        std::getline(std::cin, commande);
        
        if(std::cin.eof()){

            break;
        }
        else if(commande == "ADD"){

            test = 0;
            instance.add_contact();
        }
        else if(commande == "SEARCH"){
            test = 0;
        //    std::cout << "allo" << std::endl;
            instance.display_contact();
        }
        else if(commande == "EXIT"){
            test = 0;
            break;
        }
        else{
            test = 1;
            std::cout << "Commande non reconnue. Entrez ADD, SEARCH ou  EXIT" << std::endl;
        }
    }
}

