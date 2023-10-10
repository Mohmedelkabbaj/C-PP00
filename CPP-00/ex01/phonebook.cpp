#include "phonebook.hpp"

int phonebook::get_total_contacts() const
{
   return (this->total_contacts);
}
void phonebook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
   if (this->index == 8)
   {
      this->index = 0;
   }
   this->contacts[this->index].set_first_name(first_name);
   this->contacts[this->index].set_last_name(last_name);
   this->contacts[this->index].set_nickname(nickname);
   this->contacts[this->index].set_phone_number(phone_number);
   // this->contacts[this->index].set_darkest_secret(darkest_secret);
   this->index = (index + 1) % 8;
   if (this->total_contacts < 8)
   {
      this->total_contacts++;
   }
}
void phonebook::insert_contact(int i)
{
   std::cout << "#++++++++++#++++++++++#++++++++++#++++++++++#" << std::endl;
	std::cout << "|  Contact information for specified index  |" << std::endl;
	std::cout << "#++++++++++#++++++++++#++++++++++#++++++++++#" << std::endl;
	std::cout << "First Name: " << this->contacts[i].get_first_name() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_phone_number() << std::endl;
	// std::cout << "Darkest Secret: " << this->contacts[i].get_darkest_secret() << std::endl;
}

void  printw(int len)
{
   int i = 0;
   while (i < len)
   {
      std::cout << " ";
      i++;
   }
}

void  print_name(std::string str)
{
   if (str.length() <= 0)
      printw(10);
   else if (str.length() >= 10)
      std::cout << str.substr(0, 9) << ".";
   else
   {
      printw(10 - str.length());
      std::cout << str;
   }
}

void phonebook::insert_phonebook() const
{
   int i;

	i = 0;
	std::cout  <<"#++++++++++#++++++++++#++++++++++#++++++++++#" << std::endl;
	std::cout  <<"|     index|first name| last name|  nickname|" << std::endl;
	std::cout  <<"#++++++++++#++++++++++#++++++++++#++++++++++#" << std::endl;
	while (i < this->total_contacts)
	{
		std::cout << "|";
      printw(9);
		std::cout << i;
		std::cout <<  "|";
		print_name(this->contacts[i].get_first_name());
		std::cout << "|";
		print_name(this->contacts[i].get_last_name());
		std::cout << "|";
		print_name(this->contacts[i].get_nickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "#++++++++++#++++++++++#++++++++++#++++++++++#" << std::endl;
}