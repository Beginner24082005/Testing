#include <iostream>
template <typename T>
class LinkedList {
private:
    class Node {
    public:
        T data;
        Node* next;
        
        Node(T value) : data(value), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void push_front(T value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void push_back(T value){
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList<int> myList;
    myList.push_front(3);
    myList.push_front(2);
    myList.push_front(1);
    myList.push_back(4);
    myList.print();

    return 0;
}




