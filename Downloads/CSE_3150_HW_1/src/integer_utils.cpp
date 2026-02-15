#include<iostream>
#include"integer_utils.h"
namespace integer_utils{
int runIntegerOption() {
    int integer1;
    int integer2;

    std::cout << "Enter first integer:" << std::endl;
    std::cin >> integer1;

    std::cout << "Enter second integer:" << std::endl;
    std::cin >> integer2;

    if (integer2 == 0) {
        std::cout << "Error: division by zero" << std::endl;
        return 0;
    }

    int result = integer1 / integer2;
    std::cout << "Result: " << result << std::endl;

    // Demonstrating increment operations

    std::cout << "After post-increment: " << integer1++ << std::endl;
    std::cout << "After pre-increment: " << ++integer1 << std::endl;
    return 0;
}

}
