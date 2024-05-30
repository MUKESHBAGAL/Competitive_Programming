#include<stdio.h>
int main(){
    int num,n1=0,n2=1,nextNum;
    printf("Enter a number to check given number is Fibonacci number or not :");
    scanf("%d",&num);
    nextNum=n1+n2;
     if(num==n1)
        printf("%d is a Fibonacci Number\n",num);
        if(num==n2)
        printf("%d is a Fibonacci Number\n",num);
        if(num==nextNum)
        printf("%d is a Fibonacci Number\n",num);
    for(int i=1;i<=num;i++){
        if(num==nextNum){
            printf("%d is a Fibonacci Number\n",num);
            break;
        }
            n1 = n2;
            n2 = nextNum;
            nextNum = n1 + n2;
    }
     if(num!=nextNum)
        printf("%d is not a Fibonacci Number\n",num);
    
    return 0;
}

// OUTPUT::

// Enter a number to check given number is Fibonacci number or not :21
// 21 is a Fibonacci Number

// Enter a number to check given number is Fibonacci number or not :25
// 25 is not a Fibonacci Number
