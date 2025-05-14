
#include <iostream>
#include "BubbleSort.h"
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9,0,6};


    BubbleSort b;
    int* array = b.bubbleSort(arr,7);
    for (int i = 0; i < 7; ++i) {
        cout<<array[i]<<endl;
    }

    return 0;
}