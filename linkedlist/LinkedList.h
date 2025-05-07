#ifndef DSA_WITH_CPP_LINKEDLIST_H
#define DSA_WITH_CPP_LINKEDLIST_H

#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    Node<T> *next;
    T value;

    Node(T value) : value(value), next(nullptr) {}
};

template<typename T>
class LinkedList {
private:
    Node<T> *head;
    Node<T> *tail;
    int size;
public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void addFirst(T value) {
        Node<T> *node = new Node<T>(value);
        if (!head) {
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
        size++;
    }

    void addLast(T value) {
        Node<T> *node = new Node<T>(value);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    void insertAt(int index, T value) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index " + to_string(index) + " out of bounds");
            return;
        }
        if (index == 0) {
            addFirst(value);
            return;
        }
        if (index == size - 1) {
            addLast(value);
            return;
        }
        Node<T> *temp = head;
        Node<T> *node = new Node<T>(value);
        for (int i = 1; i < index; ++i) {
            temp = temp->next;
        }
        node->next = temp->next;
        temp->next = node;
        size++;

    }

    void display() {
        Node<T> *temp = head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int length() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
};

#endif // DSA_WITH_CPP_LINKEDLIST_H
