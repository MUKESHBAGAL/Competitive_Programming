#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter No. of row in 'L' character: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            if(j==1||(i==n))
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
Enter No. of row in 'L' character: 5
* 
*       
* 
*       
* * * * 

*/
