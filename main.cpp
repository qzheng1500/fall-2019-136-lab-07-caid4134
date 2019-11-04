#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"
#include <fstream>

int main ()
{
  std::string line;
  std::string output;

  // edited
  std::ifstream in("bad-code.cpp");
  std::streambuf *cinbuf = std::cin.rdbuf();
  std::cin.rdbuf(in.rdbuf());

  std::ofstream out("out.txt");
  std::streambuf *coutbuf = std::cout.rdbuf();
  std::cout.rdbuf(out.rdbuf());

  while (getline (std::cin, line))
      output += format (line);
  std::cout << output;

  std::cin.rdbuf(cinbuf);
  std::cout.rdbuf(coutbuf);
}
