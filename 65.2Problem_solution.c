#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number of rows for 'M' Character: ");
    scanf("%d", &n);

    // Check if the input is even; if so, print an error message and exit
    if (n<2 &&n % 2 == 0) {
        printf("Invalid Input Enter!!!");
        return 1; // Exit the program with an error status
    }

    // Outer loop to iterate from top to bottom
    for (i = n; i >= 1 ; i--) {
        // Inner loop to iterate through each column
        for (j = 1; j <= n; j++) {
            // Conditions to determine where to print '*'
            if (j == 1 || j == n ||                          // First and last columns
                (i == j && i <= n/2 + 1) ||                   // Left slant for first half
                (i + j == n + 1 && i <= n/2 + 1)              // Right slant for first half
               )
                printf("* ");
            else
                printf("  "); // Print two spaces for empty spaces
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0;
}

// OUTPUT::
// Enter a number of rows for 'M' Character: 5
// *       * 
// *       * 
// *   *   * 
// * *   * * 
// *       * 
