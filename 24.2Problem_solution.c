#include <stdio.h>
#include <math.h>

int Order(int num) {
    int count = 0;
    while (num > 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int main() {
    int num, num1, result = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    num1 = num; // Store the original value of num
    int x = Order(num);
    while (num > 0) {
        rem = num % 10;

        // Calculate rem raised to the power of x
        int temp = 1;
        for (int i = 0; i < x; i++) {
            temp *= rem;
        }
        result += temp;

        num = num / 10; // Update num
    }
    if (result == num1)
        printf("%d is a Palindrome Number\n", num1);
    else
        printf("%d is not a Palindrome Number\n", num1);

    return 0;
}

// OUTPUT:: 
// Enter a Number: 153
// 153 is a Palindrome Number

// Enter a Number: 1634
// 1634 is a Palindrome Number

// Enter a Number: 1253
// 1253 is not a Palindrome Number





/*
#include <stdio.h>
#include<math.h>
#include<math.h>
int Order(int num){
    int count=0;
    while(num>0){
        num=num/10;
        count ++;
    }
    return count;
}
int main() {
    int num, num1, result = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    num1 = num; // Store the original value of num
    int x = Order(num);
    while (num > 0) {
        rem = num % 10;
        result = result + pow(rem, x);
        num = num / 10; // Update num
    }
    if (result == num1)
        printf("%d is a Palindrome Number\n", num1);
    else
        printf("%d is not a Palindrome Number\n", num1);
        
    return 0;
}
*/
