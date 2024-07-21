#include<stdio.h>

int main() {
    int n,i,j;
    printf("Enter a number of rows for 'J' Character: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("Invalid Input Enter!!!");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 ||                              // Top horizontal line
                j == n/2 + 1 && i < n ||                // Vertical line in the middle
                (j == 1 && i > n/2 && i < n) ||         // Horizontal line at the bottom
                (i == n && ( j>1&&j <= n/2) )               // Bottom horizontal line
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
// Enter a number of rows for 'J' Character: 7
// * * * * * * * 
//       *       
//       *       
// *     *       
// *     *       
// *     *       
//   * *         

