#include<stdio.h>
void DecimalToOctal(int num);
int main(){
    int num;
    printf("Enter a number to convert into Octal Number: ");
    scanf("%d",&num);
    printf("Octal of given number is : ");
    DecimalToOctal(num);
    printf("\n");
}
void DecimalToOctal(int num){
    if(num>=0 &&num<8){
        printf("%d",num);
        return;
    }
    else{
        DecimalToOctal(num/8);
        printf("%d",num%8);
    }
}

// OUTPUT::
// Enter a number to convert into Octal Number: 10
// Octal of given number is : 12

// Enter a number to convert into Octal Number: 45
// Octal of given number is : 55

// Enter a number to convert into Octal Number: 120
// Octal of given number is : 170
