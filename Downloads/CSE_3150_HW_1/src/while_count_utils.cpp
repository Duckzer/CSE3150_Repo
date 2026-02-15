#include<iostream>
#include"while_count_utils.h"
namespace while_count_utils{
int runWhileCount(){
std::cout << "Enter a number to count to:" << std::endl;
int Number;
int count=1;
std::cin >> Number;
while(Number>10){
std::cout << " I'm programmed to only count up to 10!" << std::endl;
std::cout << "Enter a number to count to:" << std::endl;
std::cin >> Number;    
}
while(count<= Number ){
if(count==5){count++;
continue;}
std::cout << count << std::endl;
count++;
}
return 0;
}


}