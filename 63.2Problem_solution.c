#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter a number of rows for 'U' Character: ");
    scanf("%d", &n);
    if(n<=3){
        printf("Invalid Input By user!!\n");
        return 1;
    }
    int num =n/2; 
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
         if(j==1 && i<n || j==n && i<n || i==n && (j>1 && j<n))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


// OUTPUT::
// Enter a number of rows for 'U' Character: 4
// *     * 
// *     * 
// *     * 
//   * *   





