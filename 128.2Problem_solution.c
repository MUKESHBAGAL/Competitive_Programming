// WRITE A CODE FOR COUNT NO. OF DIGIT IN NUMBER GIVEN BY USER
#include <stdio.h>
int Count(int num);
int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int count = Count(num);
    printf("No. of Digits in given number %d is %d\n", num, count);
    return 0;
}
int Count(int num) {
    if (num == 0)
        return 0;
    return 1 + Count(num / 10);
}

// OUTPUT::
// Enter a Number: 145
// No. of Digits in given number 145 is 3

// Enter a Number: 654494947
// No. of Digits in given number 654494947 is 9
	
