#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter No. of row in 'F' character: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            if(i==1 || j==1||i==(n/2)+1)
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
Enter No. of row in 'F' character: 5
* * * * 
*       
* * * * 
*       
* 

*/
