//
// Created by Sumon on 5/7/2025.
//

#include "LinkedList.h"
void print(int n){
    cout<<n<<endl;
}
void print(bool b){
    cout<<b<<endl;
}
int main(){
    LinkedList<int> list;
    list.addFirst(80);
    list.addLast(70);
    list.addFirst(90);
    list.addLast(100);
    list.addFirst(110);
    list.insertAt(1,1110);
    list.insertAt(3,220);
    list.display();
    print(list.length());
    print(list.isEmpty());





    return 0;
}