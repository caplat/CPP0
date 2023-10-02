#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>

class Contact {

public:    

    Contact( void );
    ~Contact( void );
    
    void init_contact();
    std::string get_info( int nb );

private :

   std::string first_name;
   std::string last_name;
   std::string nickname;
   std::string phone_number;
   std::string darkest_secret;
};

#endif