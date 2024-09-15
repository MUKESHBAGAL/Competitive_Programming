 // //Write a code for nth Power
#include <stdio.h>
int Power(int num, int pw);
int main() {
    int num, pw;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pw);
    int result = Power(num, pw);
    printf("%d raised to the power %d is %d\n", num, pw, result);
    return 0;
}
int Power(int num, int pw) {
    if (pw == 0) {
        return 1;
    } else {
        return num * Power(num, pw - 1);
    }
}

//OUTPUT::
// Enter a number: 2
// Enter a power: 4
// 2 raised to the power 4 is 16

// Enter a number: 5
// Enter a power: 5
// 5 raised to the power 5 is 3125

