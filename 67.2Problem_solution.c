#include<stdio.h>
int main(){
    int n,num,i,j;
    printf("Enter No. of row in 'Y' character: ");
    scanf("%d",&num);
    n=(num/2)+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(i==j||i+j==2*n+1)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j==(2*n)/2+1)
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
Enter No. of row in 'Y' character: 5
*     * 
 *   *  
  * *   
   *   
   *   
   *     

*/
