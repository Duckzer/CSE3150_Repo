#include <iostream>
#include "string_utils.h"
#include<string>
namespace string_utils{
int runStringOption(){
int str_Len;
std::string input;
std::cout << " Enter string length:" << std::endl;
std::cin >>str_Len;
if (str_Len>=20){
std::cout <<"Error: Length cannot be greater than 20"<< std::endl;
return 1;
} 
else{
std::cin.ignore();
std::cout << " Enter string: " << std::endl;
std::getline(std::cin, input);
char table[20];
for (int i = 0; i < str_Len && i < input.length() && i < 19; i++) {
                table[i] = input[i];
            }
            table[str_Len] = '\0';
std::cout << "C-style string: " << table << std::endl;

    return 0;}
}


}
