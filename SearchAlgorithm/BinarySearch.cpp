#include<iostream>
using namespace std;
int binarySearch(int* arr,int size, int target){
    int left = 0;
    int right = size-1;

    while (left<=right){
        int mid = left + ((right-left)/2);
        if (arr[mid] == target){
            return  mid;
        }else if(target<arr[mid]){
            right = mid-1;
        }else   {
            left = mid+1;
        }

    }

    return  -1;

}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 4;
    cout<<binarySearch(array,size,target);


    return 0;
}