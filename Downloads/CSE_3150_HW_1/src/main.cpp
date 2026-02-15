#include <iostream>
#include "grade_utils.h"
#include "string_utils.h"
#include "integer_utils.h"
#include"while_count_utils.h"
#include"do_while_count_utils.h"
int main(){
// c++ main.cpp grade_utils.cpp do_while_count_utils.cpp integer_utils.cpp  string_utils.cpp  while_count_utils.cpp -o main -std=c++23
int choice=0;
int value=0;
do{
std::cout << "1. Integer operations " << std::endl;
std::cout << "2. Character arrays and C-style strings " << std::endl;
std::cout << "3. Grade evaluation " << std::endl;
std::cout << "4. While-loop counting " << std::endl;
std::cout << "5. Do-while and range-based for counting " << std::endl;
std::cout << "6. Quit " << std::endl;
std::cin >> choice;
switch(choice){
case 1:
       integer_utils::runIntegerOption();
       choice=0;
       break;
case 2: 
       value=string_utils::runStringOption();
       if(value==1){return 1;}
       choice=0;
       break;
case 3:
       value=grade_utils::calculateGrade();
       if(value==1.00){return 1;}
       choice=0;
       break;
case 4: 
       while_count_utils::runWhileCount();
       choice=0;
       break;
case 5:
       do_while_count_utils::runDoWhile_Count();
       choice=0;
       break;
case 6:
       std::cout << "Goodbye!" << std::endl;
       return 0;

}}while(choice < 1 || choice > 6);

}
