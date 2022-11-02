#include<stdio.h>

/*
## Recursive and Non-recursive Algorithms
    - Recursive sorting algorithms work by splitting the input into two or more smaller inputs 
      and then sorting those,
      then combining the results.
      eg. Merge sort and quick sort

    - A non-recursive technique is anything that doesn't use recursion.
    - it does the sorting all at once, without calling itself
      eg. Insertion sort, bubble sort

## Asymptotic Analysis
    - evaluate the performance of an algorithm in terms of input size
    - no measurement of actual running time
    - not dependent on machine-specific constants

## Complexity:
    - there are two parameters to judge an algorithm
        1. Time complexity
                - time taken by the algorithm to solve a problem
                - measured by calculating * iterations of loop
                                          * number of comparisons
        2. Space complexity
                - space taken by the algorithm to solve a problem
                - space complexity = (taken by input variables) + (auxiliary space)

## Asymptotic Notations
    - mathematical tools to represent the complexity for asymptotic analysis
    
    1. Big O Notation
            - we determine worst case time complexity with Big O notation
            - gives maximum amount of time an algorithm requires to consider all inputs
    2. Omega Notation
            - we determine best case time complexity with Omega notation
            - gives minimum amount of time an algorithm requires to consider all inputs
    3. Theta Notation
            - we determine average case time complexity with the theta notation
            - lies between O ang Omega
*/

void main() {
    int i, j, m, n;
    /*
    ## Time Complexity
    -------------------

    ## Big O Notation
        - most common metric for time complexity
        - Big O = Big Order function
        - drops constant values and lower order terms
                eg. O(3*n^2 + 10n + 10) = O(n^2)
        - cares about worse case scenario

        Best to Worst
        o(1) << O(log n) << O(n) << O(n log n) << O(x^2) << O(x^3) << O(2^x) << O(n!)
    */

    // * Simple Loop
    for(i=0; i<n; i++) {
        //function
    }

    /*
        in the above block of code,
        let's consider the function inside the loop takes constant time 'C' to execute
        the loop will be executed 'n' times
        hence the time taken will be C * n

        in Big O terms, we neglect the constants and lower order terms
            therefore, time complexity for the loop = O(n)
    */

   // * Nested Loop
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            //iterative code
        }
    }

    /*
        here, for each iteration of outer loop,
        the inner loop will be iterated 'm' times
        hence the tie taken = m * n

        in Big O terms,
            time complexity for nested loop = O(mn)
        
        if m = n
            time complexity for nested loop = O(n^2)
    */

   // * Conditional Statements
   if(i>j) {
    // block of code with time complexity = O(n)
   } else {
    // block of code with time complexity = O(n^2)
   }

   /*
        here assume that for both if as well as else block
        we have certain code with different time complexity

        we calculate the time complexity for worst case
        hence in our example, else block has time complexity of O(n^2)

        hence the time complexity for the entire conditional block = O(n^2)
   */

    // **********

    /*
    ## Space Complexity
    */
}