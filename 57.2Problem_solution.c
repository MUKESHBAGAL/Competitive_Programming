#include<stdio.h>

int main() {
    int n,i,j;
    printf("Enter a number of rows for 'O' Character: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if((i==1 && (j>1 && j<n-1)) || 
            i==n&&(j>1 && j<n-1) || 
            j==1 &&(i>1&&i<n) || 
            j==n-1 && (i>1 &&i<n) 
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
// Enter a number of rows for 'O' Character: 6
//   * * *     
// *       *   
// *       *   
// *       *   
// *       *   
//   * * *     


