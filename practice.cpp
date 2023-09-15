#include <iostream>
using namespace std;
template <typename T>
class LinkedList {
private:
    class Node {
    public:
        T data;
        Node* next;
        unsigned int count;
        Node(T value) : data(value), next(nullptr), count(0) {}
    };
    Node* head;
    Node* tail;

public:  
    LinkedList() : head(nullptr), tail(nullptr) {}

    void push_front(T value) {
        Node* newNode = new Node(value);
        if (head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
            Node* current = head->next;
            while (current != nullptr) {
                current->count++;
                current = current->next;
            }
        }
    }

    void push_back(T value){
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            Node* current = tail;
            tail->next = newNode;
            tail = newNode;
            tail->count = current->count + 1;
        }
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Index: " << current->count << ", Data: " << current->data << " ";
            current = current->next;
        }
        cout << endl;
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




