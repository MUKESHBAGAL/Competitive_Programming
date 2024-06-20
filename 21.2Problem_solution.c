#include<stdio.h>
int main(){
    int n,i;
    float sum=1.0;
    printf("Enter a number upto add the series: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        sum=sum+1.0/i;
    printf("Sum of the Series %f\n",sum);
    return 0;
    
}

// OUTPUT::
// Enter a number upto add the series: 5
// Sum of the Series 2.283334

