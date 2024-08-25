#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10]; // Define matrices a, b, and c
    int i, j, k, ar, ac, br, bc; // Loop variables and matrix dimensions
    
    // Input dimensions of the first matrix
    printf("Enter rows in 1st matrix: ");
    scanf("%d", &ar);
    printf("Enter columns in 1st matrix: ");
    scanf("%d", &ac);
    
    // Input dimensions of the second matrix
    printf("Enter rows in 2nd matrix: ");
    scanf("%d", &br);
    printf("Enter columns in 2nd matrix: ");
    scanf("%d", &bc);
    
    // Check if matrix multiplication is possible
    if (ac != br) {
        printf("Matrix multiplication is not possible.\n");
        return 1; // Exit program with error code
    }
    
    // Input elements for the first matrix
    printf("Enter input for 1st matrix %dX%d:\n", ar, ac);
    for (i = 0; i < ar; i++) {
        for (j = 0; j < ac; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements for the second matrix
    printf("Enter input for 2nd matrix %dX%d:\n", br, bc);
    for (i = 0; i < br; i++) {
        for (j = 0; j < bc; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Perform matrix multiplication
    for (i = 0; i < ar; i++) {
        for (j = 0; j < bc; j++) {
             c[i][j] = 0;
            for (k = 0; k < ac; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Print the matrices
    printf("1st matrix is:\n");
    for (i = 0; i < ar; i++) {
        for (j = 0; j < ac; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("2nd matrix is:\n");
    for (i = 0; i < br; i++) {
        for (j = 0; j < bc; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    // Print the result matrix after multiplication
    printf("Multiplication matrix is:\n");
    for (i = 0; i < ar; i++) {
        for (j = 0; j < bc; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT::
        Enter rows in 1st matrix: 2
        Enter columns in 1st matrix: 3
        Enter rows in 2nd matrix: 3
        Enter columns in 2nd matrix: 2
        Enter input for 1st matrix 2X3:
        5 6 1 4 1 2 
        Enter input for 2nd matrix 3X2:
        1 2 4 3 5 6
        1st matrix is:
        5 6 1 
        4 1 2 
        2nd matrix is:
        1 2 
        4 3 
        5 6 
        Multiplication matrix is:
        34 34 
        18 23 

*/
