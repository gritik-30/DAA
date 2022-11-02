#include <stdio.h>

/*
## Linear Search [ O(n)]
    - also called sequential search
    - compares the number with each
    - simplest algorithm

    - best case:
        - number found at first position (index 0)
        - time complexity = O(1)
    
    - worst case:
        - number found at last position (index n-1) or not found
        - time complexity = O(n)
*/
int linear_search(int array[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

/*
## Binary Search [ O(log n)]
    - follows divide and conquer approach
    - only works on sorted arrays
    - compares the number with element in the middle of the array
    - works on the idea of neglecting half of the array with every iteration

    - best case:
        - number found at middle of array
        - time complexity = O(1)
    
    - worst case:
        - number found at extreme position (index n-1 || index 0) or not found
        - time complexity = O(log n)
*/
int binary_search(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
    int array[] = {0, 1, 2, 4, 9};
    int x, result = -1;
    int n = sizeof(array) / sizeof(array[0]);

    printf("***********\nLinear Search:\n");
    printf("Given array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", array[i]);
    printf("\nEnter the number to be searched:");
    scanf("%d", &x);
    result = linear_search(array, n, x);
    (result == -1) ? printf("\nElement not found!\n\n") : printf("\nElement found at index: %d\n\n", result);

    printf("***********\nBinary Search:\n");
    printf("Given array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", array[i]);
    printf("\nEnter the number to be searched:");
    scanf("%d", &x);
    result = binary_search(array, x, 0, n - 1);
    (result == -1) ? printf("\nElement not found!\n\n") : printf("\nElement found at index: %d\n\n", result);
}