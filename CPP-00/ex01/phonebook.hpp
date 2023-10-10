#ifndef PhoneBook_HPP
#define PhoneBook_HPP


#include "contact.hpp"
#include <iostream>

class phonebook
{
   private:
      contact contacts[8];
      int index;
      int total_contacts;
   public:
      phonebook(): index(0), total_contacts(0) {}
      void add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
      void insert_contact(int i);
      void insert_phonebook() const;
      int get_total_contacts() const;
};

#endif