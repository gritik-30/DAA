#include<stdio.h>
#include<stdlib.h>

void generateArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        arr[i] = rand()%100;
}

void displayArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        printf("%d\t",arr[i]);
}

/*
## BUBBLE SORT
    Time Complexity = O(n^2)
*/
void bubbleSort(int arr[], int n) {
    int temp;

    for(int i=0; i<n-1; i++) {
        
        for(int j=0; j<n-1; j++) {

            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
## INSERTION SORT
    Time Complexity = O(n^2)
*/
void insertionSort(int arr[], int n) {
    int temp;
    
    for(int i=1; i<n; i++) {
        temp = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = temp;
    }
}

void main() {
    int n , array[100];

    printf("\nBubble Sort:");
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nGenerated Array:\n");
    generateArray(array, n);
    displayArray(array, n);
    bubbleSort(array, n);
    printf("\nSorted Array:\n");
    displayArray(array, n);

    printf("\n\nInsertion Sort:");
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nGenerated Array:\n");
    generateArray(array, n);
    displayArray(array, n);
    insertionSort(array, n);
    printf("\nSorted Array:\n");
    displayArray(array, n);

    printf("\n");
}