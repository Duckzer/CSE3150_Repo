#include<iostream>
#include"grade_utils.h"
namespace grade_utils{
double calculateGrade(){
 std::cout << "Enter student type (U for undergrad, G for grad):" << std::endl;
 char Type;
 int Grade;
 std::cin >> Type;
 std::cout << "Enter numeric grade: " << std::endl;
 std::cin >> Grade;
 if(Grade < 0 || Grade > 100){
   std::cout << " Error: Invalid grade" << std::endl; 
   return (double) 1;
 }
 if ((Type == 'U' || Type == 'u') && Grade >= 60) {
        std::cout << "Status: Pass" << std::endl;  
    } else if ((Type == 'G' || Type == 'g') && Grade >= 70) {
        std::cout << "Status: Pass" << std::endl;  
    } else {
        std::cout << "Status: Fail" << std::endl;  
    }

return  (double) Grade;

}
}
