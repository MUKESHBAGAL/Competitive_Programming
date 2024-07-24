#include<stdio.h>

int main() {
    int n,i,j;
    printf("Enter a number of rows for 'M' Character: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("Invalid Input Enter!!!");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n ||                           // First and last columns
                (i == j && i <= n/2 + 1) ||                   // Left slant for first half
                (i + j == n + 1 && i <= n/2 + 1)              // Right slant for first half
               )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT::
// Enter a number of rows for 'M' Character: 9
// *               * 
// * *           * * 
// *   *       *   * 
// *     *   *     * 
// *       *       * 
// *               * 
// *               * 
// *               * 
// *               * 
