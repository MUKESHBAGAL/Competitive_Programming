#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter number of row Number Characters '6': ");
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
            if (i == 1 && (j>1&&j < n - 1) ||             // Top horizontal line
                j == 1 && i>1||              // Left vertical line
                i == num+1 && j < n - 1 ||           // Middle horizontal line
                j == n - 1 && (i > num+1 && i < n) || // Right vertical line
                i == n && j < n - 1                // Bottom horizontal line
               )
                printf("* ");
            else
                printf("  "); // Print two spaces for empty spaces
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0;
}



// // // OUTPUT::
// Enter number of row Number Characters '6': 7

//               * * * *     
//             *             
//             *             
//             * * * * *     
//             *         *   
//             *         *   
//             * * * * *     





