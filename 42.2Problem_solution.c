#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j==1||j==i||j==2*i-1||i==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
 for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j==1||j==i||j==2*i-1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}
/*
//OUTPUT::
Enter number of rows: 5
        * 
      * * * 
    *   *   * 
  *     *     * 
* * * * * * * * * 
*       *       * 
  *     *     * 
    *   *   * 
      * * * 
        * 

*/

/*
 //2nd code
#include <stdio.h>
int main() {
    int i, j,n, rows; 
    printf("Enter number of rows: ");
    scanf("%d", &n);
    rows=(n/2)+1;
// // Print upper half of pyramid
    for (i = 1; i <= rows; i++) {
        for (int j = rows - i; j >= 1; j--)
            printf("  ");
        if (i!=1)
            printf("* ");
        for (j = 2; j < i; j++) {
            if (i == rows)
                printf("* ");
            else
                printf("  ");
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
 // Print lower half of pyramid
    for (i = rows; i > 2; i--) {
        for (int j = rows - i; j >= 1; j--)
            printf("  ");

        if (i!=1)
            printf("* ");

        for (j = 2; j < i; j++)
            printf("  ");

        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
 // Print single asterisk at the bottom center
    for(int i = 1; i < rows; i++)
        printf("  ");
    printf("*\n");
    return 0;
}

*/
