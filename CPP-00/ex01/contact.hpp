#ifndef CONTACT_HPP
#define CONTACT_HPP


#include<string>
class contact {
   private:
      std::string first_name;
      std::string last_name;
      std::string nickname;
      std::string phone_number;
      std::string darkest_secret;
   public:
      std::string get_first_name(void) const;
      std::string get_last_name(void) const;
      std::string get_nickname(void) const;
      std::string get_phone_number(void) const;
      std::string get_darkest_secret(void) const;
      int set_first_name(std::string first_name);
      int set_last_name(std::string last_name);
      int set_nickname(std::string nickname);
      int set_phone_number(std::string phone_number);
      // int set_darkest_secret(std::string darkest_secret);
};

#endif