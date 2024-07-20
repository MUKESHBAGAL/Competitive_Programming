#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of row in 'I' Character: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Only Enter odd input!!\n");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n/2 || i==0 || i==n-1)
            printf("* ");
            else
            printf("  ");
        }
     printf("\n");
    }
    return 0;
}

/*
OUTPUT::
Enter number of row in 'I' Character: 5
* * * * * 
    *     
    *     
    *     
* * * * * 

*/
