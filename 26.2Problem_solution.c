#include <stdio.h>
#include <string.h>

int main() {
   int n,a=0,b=1,c=0;
   printf("Enter a number upto Print Fibonacci Series: ");
   scanf("%d",&n);
   printf("Fibonacci Series upto %d: %d %d",n,a,b);
   while(c<n){
       
       printf(" %d",c);
       a=b;
       b=c;
       c=a+b;
   }
   printf("\n"); 
    return 0;
}

// // OUTPUT::
// Enter a number upto Print Fibonacci Series: 50
// Fibonacci Series upto 50: 0 1 0 1 1 2 3 5 8 13 21 34
