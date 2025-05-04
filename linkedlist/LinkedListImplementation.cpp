#include <iostream>

using namespace std;
class Node{

private:
    Node* head;
    Node* tail;
private:
    int val;
    Node* next;
public:
    Node(){
        head = tail = NULL;
    }
    Node(int val){
        this->val = val;
    }

    void addFirst(int val){
        Node* newNode = new Node(val);
        if (head==NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }
    void addLast(int val){
        Node* newNode = new Node(val);
        if (head==NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<endl;
            temp = temp->next;
        }
        cout<<"End"<<endl;

    }
};
int main(){
    Node node;
    node.addFirst(34);
    node.addFirst(45);
    node.addFirst(89);
    node.addLast(70);
    node.printList();

}
