#include <iostream>
using namespace std;
template <typename T>
class LinkedList {
private:
    class Node {
    public:
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr){}
    };
    Node* head;
    Node* tail;

public:  
    LinkedList() : head(nullptr), tail(nullptr) {}
    LinkedList(const T* dataArray, unsigned int size) : head(nullptr), tail(nullptr) {
        for (unsigned int i = 0; i < size; i++) {
            push_back(dataArray[i]);
        }
    }
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
        }
    }

    void bubbleSort(){
        Node* current = head;
        bool isSorted = false;
        int swapNum = 0;
        while (!isSorted){
            current = head;
            swapNum = 0;
            while (current != tail){
                if (current->data > current->next->data){
                    unsigned int temp = current->data;
                    current->data = current->next->data;
                    current->next->data = temp;
                    swapNum++;
                }
                current = current->next;
            }
            if (swapNum == 0) isSorted = true;
        }
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Data: " << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int dataArray[] = {28, 6, 4, 2, 24};
    unsigned int size = sizeof(dataArray) / sizeof(dataArray[0]);

    LinkedList<int> myList(dataArray, size);
    myList.bubbleSort();
    myList.print();
    return 0;
}




