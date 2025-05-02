#include <iostream>
using namespace std;

// print all subarray of a array
void printSubarray(int *arr, int size){
    for (int i = 0; i <size; ++i) {
        for (int j = i; j < size; ++j) {
            for (int k = i; k <=j ; ++k) {
                cout<<arr[k];
            }
            cout<<" ";


        }
        cout<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printSubarray(arr,5);



    return 0;
}