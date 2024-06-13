#include <stdio.h>

int main() {
  long int n,n1,i,sum=0;
  printf("Enter a Number: ");
  scanf("%ld",&n);
  n1=n;
  while(n!=0){
      int fact=1;
     i=n%10;
     for(int j=2;j<=i;j++){
         fact=fact*j;
     }
     sum=sum+fact;
     n=n/10;
  }
  if(sum=n1)
      printf("%ld is a Strong number\n",n1);
  else
      printf("%ld is not a Strong number\n",n1);
    return 0;
}

// OUTPUT::
// Enter a Number: 145
// 145 is a Strong number

// Enter a Number: 40585
// 40585 is a Strong number
