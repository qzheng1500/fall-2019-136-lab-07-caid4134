#include <iostream>
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
char c;
bool islead=true;
std::string output=line;
for(int i=0;i<line.length();i++){
char c=line[i];
if((isspace(c)||(c=='\t'))&&(islead)){
   output.erase(0,1);}
else{islead=false;}
}
return output;
}
int countChar(std::string line, char c){
int count = 0;
for(char match:line){
	if(match == c){
		count++;
	}
}
return count;
}

