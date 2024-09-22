#include<stdio.h>
void DecimalToHexa(int num);
int main() {
    int num;
    printf("Enter a number to convert into Hexadecimal Number: ");
    scanf("%d", &num);
    printf("Hexadecimal of given number is : ");
    DecimalToHexa(num);
    printf("\n");
    return 0;
}
void DecimalToHexa(int num) {
    if(num>=0 && num<16){
        if(num>9){
            printf("%c",num+'A'-10);
        } else {
            printf("%d", num);
        }
        return;
    } else {
        DecimalToHexa(num / 16);
        printf("%X", num % 16);
    }
}

// OUTPUT::
// Enter a number to convert into Hexadecimal Number: 48
// Hexadecimal of given number is : 30

// Enter a number to convert into Hexadecimal Number: 154
// Hexadecimal of given number is : 9A

// Enter a number to convert into Hexadecimal Number: 1789
// Hexadecimal of given number is : 6FD

