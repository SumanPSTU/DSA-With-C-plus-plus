#include <iostream>

template<typename T>
class Node {
private:
    Node<T>* head;
    Node<T>* tail;
    Node<T>* next;
    int size;
    T val;
public:
    Node<T>() {
        this->head = NULL;
        this->tail = NULL;
        this->next = NULL;
        this->size = 0;
    }

    Node<T>(T val) {
        this->val = val;
    }

    void addFirst(T val) {
        Node<T> *node = new Node<T>(val);
        if (head == NULL && tail == NULL) {
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
        size++;
    }

};