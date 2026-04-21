#pragma once
#include <iostream>
#include <memory>

class DoublyLinkedList {
private:
    struct Node {
        int value;
        std::shared_ptr<Node> next;  // owns forward
        std::weak_ptr<Node> prev;    // observes backward — no ownership, breaks cycle

        Node(int value) : value(value), next(nullptr), prev() {}

        ~Node() {
            std::cout << "Destroying node " << value << "\n";
        }
    };

    std::shared_ptr<Node> head_;
    std::shared_ptr<Node> tail_;

public:
    DoublyLinkedList() = default;
    ~DoublyLinkedList() = default;

    DoublyLinkedList(const DoublyLinkedList&) = delete;
    DoublyLinkedList& operator=(const DoublyLinkedList&) = delete;

    void push_back(int value) {
        auto node = std::make_shared<Node>(value);

        if (tail_ == nullptr) {
            head_ = node;
            tail_ = node;
        } else {
            node->prev = tail_;       // weak_ptr: just observe the previous node
            tail_->next = node;       // shared_ptr: forward chain owns the node
            tail_ = node;
        }
    }

    void print_forward(std::ostream& os) const {
        auto current = head_;
        while (current != nullptr) {
            os << current->value;
            if (current->next != nullptr) os << " -> ";
            current = current->next;
        }
        os << "\n";
    }

    void print_backward(std::ostream& os) const {
        auto current = tail_;
        while (current != nullptr) {
            os << current->value;
            auto previous = current->prev.lock();  // convert weak_ptr -> shared_ptr temporarily
            if (previous != nullptr) os << " -> ";
            current = previous;
        }
        os << "\n";
    }
};
