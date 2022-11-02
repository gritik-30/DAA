#include<stdio.h>

void displayArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\t",arr[i]);
}

/*
## Counting Sort
    Time Complexity = O(n+k)

    - find max element in the array
    - create a new array for count with size = (max + 1)
    - this will give us an array with maximum index = max

    - the index of count array will represent the values in the input array
    - as indices are already in increasing order, we already have a sorted sequence
    - the value of count array will be the frequency of occurrence of the index in the input array
    - set all values of count array = 0

    - start counting the occurrences of the indices of count array and increment the value at the respective index

    - store cumulative sum of elements in count array

    - find (element in input array) in indices of count array (iterate the array in reverse manner)
    - in output array, store the element at (this value - 1)
    - decrement the value in count array

    - copy the output array to the input array

*/
void countingSort(int arr[], int n) {
    int output[n];

    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }

    int count[max + 1];
    for(int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for(int i = 1; i <= max; i++) {
        count[i] += count[i-1];
    }


    for(int i = n-1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {

}

void main() {
    int n;
    int array[] ={4,5,1,3,3,1,5,1};
    n = sizeof(array) / sizeof(array[0]);
    printf("%d", n);


    printf("\nCounting Sort:");
    printf("\nInput Array:\n");
    displayArray(array, n);
    countingSort(array, n);
    printf("\nSorted Array:\n");
    displayArray(array, n);

    printf("\n");
}