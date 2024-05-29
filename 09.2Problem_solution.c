#include <stdio.h>

int main() {
    int num, n, rem, rev;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        num = i;
        rev = 0;
        while (num > 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        if (rev == i)
            printf("%d,", i);
    }
     printf("\n");
    return 0;
}

// OUTPUT::
// Enter the limit: 100
// 0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,

