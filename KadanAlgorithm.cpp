#include <iostream>
using namespace std;
// print all subarray of an array
void printSubarray(int *arr, int size){
    for (int i = 0; i <size; ++i){
        for (int j = i; j < size; ++j) {
            for (int k = i; k <=j ; ++k) {
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
//maximum sum subarray in an array using Kadan's algorithm
void maximumSubarray(int* arr, int n){
    int current  = 0;
    int max = INT_MIN;
    for (int i =0;i<n;i++) {
        current+=arr[i];
        if (max<current) max = current;
        if (current<0){
            current = 0;
        }
    }
    cout<<max<<endl;
}

int main(){
    int arr[5] = {1,-2,3,4,5};
    printSubarray(arr,5);
    maximumSubarray(arr, 5);
    return 0;
}