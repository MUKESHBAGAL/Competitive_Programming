#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number of rows for 'Z' Character: ");
    scanf("%d", &n);
    
    // Outer loop to iterate through each row
    for (i = 0; i < n; i++) {
        // Inner loop to iterate through each column
        for (j = 0; j < n; j++) {
            // Conditions to determine where to print '*'
            if (i == 0 ||               // Top row
                i + j == n - 1 ||       // Diagonal line from top-right to bottom-left
                i == n - 1              // Bottom row
               )
                printf("* ");
            else
                printf("  "); // Print two spaces for empty spaces
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0;
}

/*
OUTPUT::
Enter a number of rows for 'Z' Character: 5
* * * * * 
      *   
    *     
  *       
* * * * * 
*/




