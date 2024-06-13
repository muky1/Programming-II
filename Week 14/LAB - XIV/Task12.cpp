#include <iostream>

void recursiveBubbleSort(int arr[], int size) {
    if (size == 1) {
        return;
    }
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursiveBubbleSort(arr, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main () {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unsorted array: ";
    printArray(arr, n);

    recursiveBubbleSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);



    return 0;
}