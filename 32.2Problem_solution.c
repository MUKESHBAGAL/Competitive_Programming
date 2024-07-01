#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows in reverse tringle shape pyramid:" );
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT::
// Enter a number of rows in reverse tringle shape pyramid:6
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
