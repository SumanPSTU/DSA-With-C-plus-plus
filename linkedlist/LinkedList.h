#ifndef DSA_WITH_CPP_LINKEDLIST_H
#define DSA_WITH_CPP_LINKEDLIST_H

#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    Node<T>* next;
    T value;

    Node(T value) : value(value), next(nullptr) {}
};

template<typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void addFirst(T value) {
        Node<T>* node = new Node<T>(value);
        if (!head) {
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
        size++;
    }

    void addLast(T value) {
        Node<T>* node = new Node<T>(value);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    void insertAt(int index, T value) {
        if (index < 0 || index > size) { // Fix index check
            throw out_of_range("Index " + to_string(index) + " out of bounds");
        }

        if (index == 0) {
            addFirst(value);
            return;
        }
        if (index == size) { // Allow inserting at the end
            addLast(value);
            return;
        }

        Node<T>* temp = head;
        Node<T>* node = new Node<T>(value);

        for (int i = 1; i < index; ++i) {
            temp = temp->next;
        }

        node->next = temp->next;
        temp->next = node;
        size++;
    }

    void display() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void removeFirst() {
        if (size == 0) {
            throw out_of_range("List is empty");
        }

        Node<T>* temp = head;
        head = head->next;
        delete temp; // Free memory
        size--;

        if (size == 0) { // If list becomes empty
            tail = nullptr;
        }
    }

    void removeLast() {
        if (size == 0) {
            throw out_of_range("List is empty");
        }

        if (size == 1) {
            delete head; // Free memory
            head = tail = nullptr;
            size--;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail; // Free memory
        tail = temp;
        tail->next = nullptr;
        size--;
    }

    void removeAt(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index " + to_string(index) + " out of bounds");
        }

        if (index == 0) {
            removeFirst();
            return;
        }
        if (index == size - 1) {
            removeLast();
            return;
        }

        Node<T>* temp = head;
        for (int i = 1; i < index; ++i) {
            temp = temp->next;
        }

        Node<T>* target = temp->next;
        temp->next = target->next;
        delete target; // Free memory
        size--;
    }

    int length() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    ~LinkedList() {
        Node<T>* temp = head;
        while (temp) {
            Node<T>* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

#endif // DSA_WITH_CPP_LINKEDLIST_H
