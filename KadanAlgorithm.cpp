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

//maximum sum subarray in a array

void maximumSubarrY(int* arr,int n){
    int current  = 0;
    int max = 0;
    for (int i =0;i<n;i++) {
        current+=arr[i];
        if (max<current) max = current;
        if (current<0){
            max = 0;
        }
    }
    cout<<max<<endl;
}

int main(){
    int arr[5] = {1,-2,3,4,5};
    printSubarray(arr,5);
    maximumSubarrY(arr,5);



    return 0;
}