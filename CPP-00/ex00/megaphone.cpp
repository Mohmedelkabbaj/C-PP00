#include <iostream>

int main(int ac, char **av)
{
   int i;

   i = +1;
   if(ac == 1)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   else
   {
      while (av[1][++i])
         std::cout << (char)std::toupper(av[1][i]);
   }
   return(0);
}