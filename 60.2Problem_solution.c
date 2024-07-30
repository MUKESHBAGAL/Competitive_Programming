#include<stdio.h>
int main() {
    int n, i, j;
    // Prompting user to enter the number of rows for 'R' Character
    printf("Enter a number of rows for 'R' Character: ");
    scanf("%d", &n);

    // Loop to iterate through each row
    for (i = 0; i < n; i++) {
        // Loop to iterate through each column
        for (j = 0; j < n; j++) {
            // Condition to print '*' for the first column and rows where conditions match
            if (j == 0 ||
                 (i == 0 && j < n-1) || // First row, print '*' until the last column
                 (i == n/2 && j < n-1) || // Middle row, print '*' until the last column
                 (j == n-1 && i > 0 && i < n/2 + 1) || // Last column, print '*' in specific rows
                 (i == j && i >= n/2 + 1 ) // Diagonal condition for bottom part of 'R'
               ) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        // Moving to the next line after completing each row
        printf("\n");
    }

    return 0;
}

/*
OUTPUT::

Enter a number of rows for 'R' Character: 5
* * * *   
*       * 
* * * * * 
*     *   
*       * 

*/


