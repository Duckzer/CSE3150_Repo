#include<iostream>
#include"do_while_count_utils.h"
namespace do_while_count_utils{
int runDoWhile_Count(){
int number;
int AR[]={1,2,3,4,5};
do{
    std::cout << "Enter a number between 1 and 5:" << std::endl;
    std::cin >> number;

}while(number<1 || number>5);
for (int value : AR) {
        std::cout << "Value: " << value << std::endl;

        if (value == number) {
            break;
        }
    }

    return 0;
}
}
