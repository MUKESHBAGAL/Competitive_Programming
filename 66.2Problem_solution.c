#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter No. of row in 'X' character: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-i;j++){
            if(i==j || (i+j==n+1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter No. of row in 'X' character: 5
*       *         
  *   *         
    *         
  *   *     
*       * 


*/
