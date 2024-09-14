
#include <stdio.h>
int sum(int num);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
   int result=sum(num);
   printf("sum of digit is %d\n",result);
    return 0;
}
int sum(int num){
    if(num>=0 && num<=9){
        return num;
    }
    else{
        return num%10+sum(num/10);
    }
}

// OUTPUT::
// Enter a number: 126
// sum of digit is 9

//Enter a number: 56445614
//sum of digit is 35

