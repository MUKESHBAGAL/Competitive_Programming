// Write a code for Factorial number 
#include<stdio.h>
int factorial(int num);
int main(){
   int num;
   printf("Enter a number for Factorial: ");
   scanf("%d",&num);
   printf("%d!=%d\n",num,factorial(num));
}
int factorial(int num){
    if(num==0)return 1;
    else{
        return num*factorial(num-1);
    }
}

// OUTPUT::
// Enter a number for Factorial: 5
// 5!=120
