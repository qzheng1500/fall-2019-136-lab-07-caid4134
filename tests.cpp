


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("Remove leading spaces"){
        CHECK(removeLeadingSpaces("Hello") == "Hello");
	CHECK(removeLeadingSpaces("	Hello") == "Hello");
	CHECK(removeLeadingSpaces("\t Hello") == "Hello");
}
TEST_CASE("INDENT"){
  CHECK(indent("badcode.cpp")=="int main(){\n\t// Hi, I'm a program!\n\tint x = 1;\n\tfor(int i = 0; i < 10; i++) {\n\t\tcout << i;\n\t\tcout << endl;\n\t}\n}");
}


