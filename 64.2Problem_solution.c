#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter No. of row in 'V' character: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(i==j||i+j==2*n+1)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter No. of row in 'V' character: 5
*         * 
 *       *  
  *     *   
   *   *    
    * * 
*/
