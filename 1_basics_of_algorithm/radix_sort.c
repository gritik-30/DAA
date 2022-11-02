#include<stdio.h>

void displayArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\t",arr[i]);
}

/*
## Radix Sort
    Time Complexity = O(n+k)

    - counting sort proves to be insufficient when the numbers are in wide range
    - to overcome this short-coming radix sort is used

    - it sorts the elements by first grouping the individual digits of the same place value
        (moving from least significant to most significant)
    - then, sort the elements according to their increasing/decreasing order
        ie. first sort the elements based on the value of unit place,
            then sort the elements based on the value of tens place and so on
    
    - we can use any stable sort algorithm at each significant place as intermediate sort
    - here we have used counting sort as intermediate sort algorithm

    (arr[i] / place) % 10 :
        - this expression gives us a single digit from the element
        eg. suppose arr[i] = 153
            place (ie. significant place taken into consideration) = 10 (ie. tens)
            (arr[i] / place) % 10 = (153 / 10) % 10
                                  = 15 % 10
                                  = 5 (tens place value of 153)
*/

void countingSort(int arr[], int n, int place) {
    int output[n];
    int count[10] = {0};
    
    for(int i = 0; i < n; i++) {
        count[(arr[i] / place) % 10]++;
    }

    for(int i = 1; i < 10; i++) {
        count[i] += count[i -1];
    }

    for(int i = n-1; i >= 0; i--) {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }

    for(int place = 1; max/place > 0; place*=10) {
        countingSort(arr, n, place);
    }
}

void main() {
    int n;
    int array[] ={412,523,105,387,324,211,512,186};
    n = sizeof(array) / sizeof(array[0]);
    printf("%d", n);

    printf("\nRadix Sort:");
    printf("\nInput Array:\n");
    displayArray(array, n);
    radixSort(array, n);
    printf("\nSorted Array:\n");
    displayArray(array, n);

    printf("\n");
}