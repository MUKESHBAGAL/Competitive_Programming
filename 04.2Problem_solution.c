#include<stdio.h>
int main(){
    char str[500];
    int n1,n2,n3,sum;
     printf("Entetr Number This form n1,n2,n3: ");
    scanf("%[^\n]s",str);
    sscanf(str,"%d,%d,%d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    printf("Sum of Two Number %d\n",sum);
    
}

// OUTPUT::
// Entetr Number This form n1,n2,n3: 7,5,4
// Sum of Two Number 16
