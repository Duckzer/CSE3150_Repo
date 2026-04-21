#include <iostream>
#include "doubly_linked_list_shared.hpp"

int main() {
    std::cout << "=== Phase 3: shared_ptr (memory leak demo) ===\n";
    {
        DoublyLinkedList list;
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        list.print_forward(std::cout);
    }
    // Node destructors likely DON'T all print here due to the reference cycle
    std::cout << "Finished scope\n\n";
    return 0;
}
