#include<stdio.h>
int main(){
    int n,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a value of K: ");
    scanf("%d",&k);
    int num=n;
    printf("%d ",n);
    while(n>0){
        n=n-k;
        printf("%d ",n);
    }
    while(n!=num){
       n=n+k;
        printf("%d ",n);
    }
    printf("\n");
    return 0;
}

// OUTPUT::
// Enter a number: 15
// Enter a value of K: 5
// 15 10 5 0 5 10 15 
