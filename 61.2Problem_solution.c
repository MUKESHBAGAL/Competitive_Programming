#include<stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter a number of rows for 'S' Character: ");
    scanf("%d", &n);
    if(n<5){
        printf("Invalid Input By user!!\n");
        return 1;
    }
    int num =n/2; 
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
         if (i==1&& (j>1&&j<n) ||                    // Top row, excluding corners
            i==num+1 && (j>1&&j<n) ||               // Middle row, excluding corners
            i==n && (j>1&&j<n) ||                    // Bottom row, excluding corners
            (j==1 &&(i>1&&i<num+1))||               // Left vertical line
            (j==n &&(i>n/2+1&&i<n)))               // Bottom right diagonal line
                
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


// OUTPUT::
// Enter a number of rows for 'S' Character: 7
//   * * * * *   
// *             
// *             
//   * * * * *   
//             * 
//             * 
//   * * * * *   


