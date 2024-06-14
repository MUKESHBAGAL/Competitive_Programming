#include<stdio.h>
int reverse(int num);
int main(){
   int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("After Reversing : %d\n",reverse(num));
}
int reverse(int num){
  int rem;
  static int rev=0;
    if(num==0){
        return  rev;
    }
      while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
     reverse(num);
}

// OUTPUT::
// Enter a number: 145
// After Reversing : 541
