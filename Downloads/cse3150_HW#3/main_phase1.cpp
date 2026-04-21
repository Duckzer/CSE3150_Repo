#include <iostream>
#include "linked_list_raw.hpp"

int main() {
    std::cout << "=== Phase 1: Raw Pointers ===\n";
    LinkedList list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.print(std::cout);
    std::cout << "(destructor runs, all nodes freed)\n\n";
    return 0;
}
