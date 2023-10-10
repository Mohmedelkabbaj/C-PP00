#include <iostream>
#include "contact.hpp"

std::string contact::get_first_name() const
{
   return (this->first_name);
}
std::string contact::get_last_name() const
{
   return (this->last_name);
}
std::string contact::get_nickname() const
{
   return (this->nickname);
}
std::string contact::get_phone_number() const
{
   return (this->phone_number);
}
std::string contact::get_darkest_secret() const
{
   return (this->darkest_secret);
}
int contact::set_first_name(std::string first_name)
{
   if(first_name.empty())
   {
      std::cout << "Invalid first name" << std::endl;
      return (1);
   }
   else
   {
      for (int i = 0; i < first_name.length(); i++)
      {
         if (!isalpha(first_name[i]) && !isspace(first_name[i]))
         {
            std::cout << "Invalid first name" << std::endl;
            return (1);
         }
      }
      this->first_name = first_name;
   }
   return (0);
}
int contact::set_last_name(std::string last_name)
{
   if(last_name.empty())
   {
      std::cout << "Invalid last name" << std::endl;
      return (1);
   }
   else
   {
      for (int i = 0; i < last_name.length(); i++)
      {
         if (!isalpha(last_name[i]) && !isspace(last_name[i]))
         {
            std::cout << "Invalid last name" << std::endl;
            return (1);
         }
      }
      this->last_name = last_name;
   }
   return (0);
}
int contact::set_nickname(std::string nickname)
{
   if(nickname.empty())
   {
      std::cout << "Invalid nickname" << std::endl;
      return (1);
   }
   else
   {
      for (int i = 0; i < nickname.length(); i++)
      {
         if (!isalpha(nickname[i]) && !isspace(nickname[i]))
         {
            std::cout << "Invalid nickname" << std::endl;
            return (1);
         }
      }
      this->nickname = nickname;
   }
   return (0);
}
int contact::set_phone_number(std::string phone_number)
{
   if(phone_number.empty())
   {
      std::cout << "Invalid phone number" << std::endl;
      return (1);
   }
   else
   {
      for (int i = 0; i < phone_number.length(); i++)
      {
         if (!isdigit(phone_number[i]) && !isspace(phone_number[i]))
         {
            std::cout << "Invalid phone number" << std::endl;
            return (1);
         }
      }
      this->phone_number = phone_number;
   }
   return (0);
}
