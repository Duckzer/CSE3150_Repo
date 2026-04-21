#include <iostream>
#include "doubly_linked_list_weak.hpp"

int main() {
    std::cout << "=== Phase 4: weak_ptr (cycle fixed) ===\n";
    {
        DoublyLinkedList list;
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        std::cout << "Forward:  ";
        list.print_forward(std::cout);
        std::cout << "Backward: ";
        list.print_backward(std::cout);
    }
    // All node destructors SHOULD print here — no cycle, clean cleanup
    std::cout << "Finished scope\n";
    return 0;
}
