#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"
#include <fstream>
int
main ()
{
  std::string line;
  std::string output;
  while (getline (std::cin, line))
    {
      output += format (line);
    }
  std::cout << output << std::endl;
}

