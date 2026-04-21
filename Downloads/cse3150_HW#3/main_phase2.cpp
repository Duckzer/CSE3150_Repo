#include <iostream>
#include "linked_list_unique.hpp"

int main() {
    std::cout << "=== Phase 2: unique_ptr ===\n";
    LinkedList list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.print(std::cout);
    std::cout << "(destructor runs automatically via unique_ptr chain)\n\n";
    return 0;
}
