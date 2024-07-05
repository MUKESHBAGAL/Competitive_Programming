#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows in reverse tringle shape pyramid:" );
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i;j++)
            printf("  ");
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
         for(int j=1;j<=i;j++)
            printf("  ");
        for(int j=n;j>i;j--)
         printf(" *");
          printf("\n");
    }

    return 0;
}
/*
OUTPUT::
Enter a number of rows in reverse tringle shape pyramid:5
         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *

*/
