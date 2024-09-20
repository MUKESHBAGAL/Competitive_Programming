#include<stdio.h>
void DecimalTOBinary(int num);
int main(){
    int num;
    printf("Enter a number to convert into Binary: ");
    scanf("%d",&num);
    printf("Binary of given number is : ");
    DecimalTOBinary(num);
    printf("\n");
}
void DecimalTOBinary(int num){
    if(num==0||num==1){
        printf("%d",num);
        return;
    }
    else{
        DecimalTOBinary(num/2);
        printf("%d",num%2);
    }
}

// OUTPUT::
// Enter a number to convert into Binary: 10
// Binary of given number is : 1010

// Enter a number to convert into Binary: 15
// Binary of given number is : 1111

// Enter a number to convert into Binary: 127
// Binary of given number is : 1111111

