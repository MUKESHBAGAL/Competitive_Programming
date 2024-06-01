#include <stdio.h>

int main()
{
   int n,sum=1,i;
   printf("Enter a number to check deficient or not: ");
   scanf("%d",&n);
   for(i=2;i<n;i++){
       if(n%i==0)
       sum=sum+i;
   }
    if(sum<n){
        printf("%d is a deficient number\n",n);
    }
    else{
        printf("%d is not a deficient number\n",n);
    }
    

    return 0;
}

