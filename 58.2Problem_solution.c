#include<stdio.h>
int main() {
    int n, i, j;
    // Prompt user to enter the number of rows for 'P' Character
    printf("Enter a number of rows for 'P' Character: ");
    scanf("%d", &n);
    // Iterate through each row
    for (i = 1; i <= n; i++) {
        // Iterate through each column
        for (j = 1; j <= n; j++) {
            // Determine where to print '*' and where to print ' '
            if (j == 1 ||                              // First column
                (i == 1 && j < n) ||                    // Top horizontal line (excluding last column)
                (i == n/2+1 && j < n) ||                // Middle horizontal line (excluding last column)
                (j == n && ((i > 1 && i < n/2+1)))      // Vertical line on the right side
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
OUTPUT::
Enter a number of rows for 'P' Character: 7
* * * * * *   
*           * 
*           * 
* * * * * *   
*             
*             
*  


*/

