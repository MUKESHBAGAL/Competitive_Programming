#include<stdio.h>

int main() {
    int n, i, j;
    
    // Prompt user to enter the number of rows for 'C' Character
    printf("Enter a number of rows for 'C' Character: ");
    scanf("%d", &n);
    
    // Iterate through each row
    for (i = 1; i <= n; i++) {
        // Iterate through each column
        for (j = 1; j <= n; j++) {
            // Determine where to print '*' and where to print ' '
            if ((j == 1 && (i > 1 && i < n)) ||      // Left vertical line (excluding first and last row)
                (i == 1 && j > 1) ||                 // Top horizontal line (excluding first column)
                (i == n/2 + 1 && j > n/2 + 1) ||     // Middle horizontal line (excluding left half)
                (i == n && j > 1) ||                 // Bottom horizontal line (excluding first column)
                (j == n && i > n/2 + 1)              // Right vertical line (below middle horizontal line)
               )
                printf("* ");
            else
                printf("  "); // Two spaces for formatting
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0;
}


/*
Enter a number of rows for 'C' Character: 5
  * * * * 
*         
*     * * 
*       * 
  * * * * 
*/

