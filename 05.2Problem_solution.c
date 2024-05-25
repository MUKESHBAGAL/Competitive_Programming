#include <stdio.h>
int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    num&1?printf("ODD\n"):printf("Even\n");
    return 0;
}

/*
OUTPUT::

Enter a Number: 10
Even

Enter a Number: 5
ODD
*/
