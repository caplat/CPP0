#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "contact.hpp"

class Phonebook {

public:    

    Phonebook( void );
    ~Phonebook( void );

    Contact info[8];

    void add_contact( void );
    void display_contact( void );
};

#endif