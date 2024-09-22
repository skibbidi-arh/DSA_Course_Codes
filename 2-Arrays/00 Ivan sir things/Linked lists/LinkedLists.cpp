#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int value;
    Node* next;
};

int main()
{
Node* head = new Node;
Node* second = new Node;
Node* third = new Node;

head -> value =1;
head-> next = second;

second -> value =1;
second -> next = third;

third -> value =1;
third-> next = NULL ;

}







#include <iostream>

class SingleList {
public:
    class Node {
    public:
        Node(int value = 0, Node* next = nullptr)
            : node_value(value), next_node(next) {}

        int value() const {
            return node_value;
        }

        Node* next() const {
            return next_node;
        }

    private:
        int node_value;
        Node* next_node;
    };

    SingleList() : head(nullptr) {}

    bool empty() const {
        return head == nullptr;
    }

    int front() const {
        if (empty()) {
            throw std::runtime_error("List is empty");
        }
        return head->value();
    }

    Node* begin() const {
        return head;
    }

    Node* end() const {
        return nullptr; // In a singly linked list, end is represented as nullptr
    }

    void push_front(int value) {
        head = new Node(value, head);
    }

    int pop_front() {
        if (empty()) {
            throw std::runtime_error("List is empty");
        }
        int front_value = head->value();
        Node* old_head = head;
        head = head->next(); // Move head to next node
        delete old_head; // Free the old head node
        return front_value;
    }

    void show() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->value() << " ";
            current = current->next();
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    SingleList list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    std::cout << "List contents: ";
    list.show();

    std::cout << "Front element: " << list.front() << std::endl;

    std::cout << "Popping front: " << list.pop_front() << std::endl;
    std::cout << "List after popping front: ";
    list.show();

    return 0;
}
