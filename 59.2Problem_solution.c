#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter a number of rows for 'Q' Character: ");
    scanf("%d", &n);
    
    // Check if input is less than 5; if so, print an error message and exit
    if (n < 5) {
        printf("Invalid Input By user!!\n");
        return 1; // Exit the program with an error status
    }
    
    int num = n / 2; // Calculate half of n
    
    // Outer loop to iterate through each row
    for (i = 1; i <= n; i++) {
        // Inner loop to iterate through each column
        for (j = 1; j <= n; j++) {
            // Conditions to determine where to print '*'
            if ((i == 1 && (j > 1 && j <= num + 1)) ||        // Top horizontal line
                (j == num + 2 && (i <= num + 1 && i > 1)) || // Left vertical line
                (i == j && (i >= num && i < n)) ||           // Diagonal line in the middle
                (j == 1 && (i <= num + 1 && i > 1)) ||       // Right vertical line
                (i == num + 2 && (j > 1 && j <= num + 1))    // Bottom horizontal line
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
// Enter number of row Number Characters 'Q': 7
//   * * *       
// *       *     
// *   *   *     
// *     * *     
//   * * * *     
//           *   
              





