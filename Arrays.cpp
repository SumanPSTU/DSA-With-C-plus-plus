#include <iostream>
using namespace std;

int linearSearch(int *arr,int size){
    for (int i = 0; i < size; ++i) {
        if  (arr[i] == 5) return i;
    }
    return -1;
}

//reverse array

void reverseArray(int *arr ,int size){
    for (int i = 0; i < size/2; ++i) {
        swap(arr[i],arr[size-1-i]);

    }
}
//even odd


void evenFirst(int* arr,int size){
    int left=0;
    int right = size-1;
    int temp1,temp2;
    while (left<right){
        while (left<right && arr[left] %2==0){
            left++;
        }
        while (left<right && arr[right]%2!=0){
            right--;
        }
        swap(arr[left], arr[right]);
    }
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i]=i+1;
    }

    cout<<linearSearch(arr,10)<<endl;
    evenFirst(arr,10);
    for (int i = 0; i < 10; ++i) {
        cout<<arr[i]<<" "<<endl;
    }

    reverseArray(arr,10);
    for (int i = 0; i < 10; ++i) {
        cout<<arr[i]<<" ";
    }


    return 0;
}