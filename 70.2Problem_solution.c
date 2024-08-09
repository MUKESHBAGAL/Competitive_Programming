#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter number of row Number Characters '2': ");
    scanf("%d", &n);
    
    // Check if input is less than 3; if so, print an error message and exit
    if (n < 3) {
        printf("Invalid Input By user!!\n");
        return 1; // Exit the program with an error status
    }
    
    int num = n / 2; // Calculate half of n
    
    // Outer loop to iterate through each row
    for (i = 1; i <= n; i++) {
        // Inner loop to iterate through each column
        for (j = 1; j <= n; j++) {
            // Conditions to determine where to print '*'
            if (i == 1 && (j > 1 && j < num + 1) ||          // Top horizontal line
                i == n && j < n ||                          // Bottom horizontal line
                (j == 1 && (i > 1 && i < num + 1)) ||        // Left vertical line
                (j == num + 1 && (i > 1 && i < num + 1)) ||  // Middle vertical line
                (i + j == n && i > num)                     // Diagonal line in the bottom part
               )
                printf("* ");
            else
                printf("  "); // Print two spaces for empty spaces
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0;
}

// // OUTPUT::
// Enter number of row Number Characters '2': 7


//               * *         
//             *     *       
//             *     *       
//                 *         
//               *           
//             *             
//             * * * * * *   





