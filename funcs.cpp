#include <iostream>
#include <string>
#include <cctype>

std::string removeLeadingSpaces (std::string line)
{
  int i = 0;
  while (isspace (line[i]))
    {
      i++;
    }

  return line.substr (i);
}


int
countChar (std::string line, char c)
{
  int count = 0;
for (char match:line)
    {
      if (match == c)
	{
	  count++;
	}
    }
  return count;
}

std::string indent (std::string line, int n)
{
  std::string result = "";

  for (int i = 0; i < n; i++)
    {
      result += '\t';
    }

  return result + line;
}

std::string format(std::string line)
{
  line = removeLeadingSpaces (line);
  static int count = 0;
  std::string output;
  if (countChar (line, '{') == 1)
    {
      output = indent (line, count);
      count++;
    }
  else if (countChar (line, '}') == 1)
    {
      output = indent (line, count - 1);
      count--;
    }
  else
    {
      output = indent (line, count);
    }
  output+='\n';

  return output;
}

