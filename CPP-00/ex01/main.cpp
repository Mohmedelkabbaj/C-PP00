#include "phonebook.hpp"

int main()
{
   phonebook phonebook;
   std::string command;
   std::string contact_info[5];
   int i;

   while(true)
   {
      std::cout << "phonebook> ";
      if(std::getline(std::cin, command))
      {
         if (command == "EXIT")
         {
            std::cout << "Exiting phonebook" << std::endl;
            break;
         }
         else if (command == "ADD")
         {
            std::cout << "Enter first name: ";
            std::getline(std::cin, contact_info[0]);
            std::cout << "Enter last name: ";
            std::getline(std::cin, contact_info[1]);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, contact_info[2]);
            std::cout << "Enter phone number: ";
            std::getline(std::cin, contact_info[3]);
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, contact_info[4]);
            phonebook.add_contact(contact_info[0], contact_info[1], contact_info[2], contact_info[3], contact_info[4]);
         }
         else if (command == "SEARCH")
         {
            phonebook.insert_phonebook();
            std::cout << "Enter index: ";
            std::getline(std::cin, command);
            if (command.length() == 1 && isdigit(command[0]))
            {
               i = command[0] - '0';
               if (i >= 0 && i < phonebook.get_total_contacts())
               {
                  phonebook.insert_contact(i);
               }
               else
               {
                  std::cout << "Invalid index" << std::endl;
               }
            }
            else
            {
               std::cout << "Invalid index" << std::endl;
            }
         }
         else
         {
            std::cout << "Invalid command" << std::endl;
         }
      }
      else
      {
         std::cout << "Invalid command" << std::endl;
      }
   }
}