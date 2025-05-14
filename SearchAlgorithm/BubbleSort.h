
#ifndef DSA_WITH_CPP_BUBBLESORT_H
#define DSA_WITH_CPP_BUBBLESORT_H


class BubbleSort {
public:
    int* bubbleSort(int* arr, int size){
        for (int i = 0; i < size-1; ++i) {
            for (int j = i+1; j < size; ++j) {
                if (arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }

};
#endif //DSA_WITH_CPP_BUBBLESORT_H
