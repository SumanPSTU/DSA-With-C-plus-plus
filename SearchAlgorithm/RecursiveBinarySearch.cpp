#include <iostream>
using namespace std;
int recursiveBinarySearch(int* arr,int target,int left,int right){
    if (left<=right){
        int mid = left + ((right-left)/2);
        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            return recursiveBinarySearch(arr,target,left,mid-1);
        } else{
            return recursiveBinarySearch(arr,target,mid+1,right);
        }

    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int left = 0;
    int right = 9;
    cout<<recursiveBinarySearch(arr,target,left,right);


    return 0;
}