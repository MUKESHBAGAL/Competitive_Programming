#include <stdio.h>

int main() {
    int num;
    printf("Enter How many Steps in Palindrome Number Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        int k = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j < i) {
                printf(" %c", 64 + k);
                k++;
            } else {
                printf(" %c", 64 + k);
                k--;
            }
        }
        printf("\n");
    }

    return 0;
}
/*
OUTPUT::
Enter How many Step in Palindrome Number Pyramid: 5
 A
 A B C
 A B C D E
 A B C D E F G
 A B C D E F G H I
*/

// 2nd code 3rd loop
/*
#include <stdio.h>
int main() {
    int num;
    printf("Enter How many Step in Palindrome Number Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <=num; i++) {
        for (int j = 1; j<=i; j++) 
            printf(" %c", 64+j);
        for (int j=i-1; j>=1; j--) 
          printf(" %c",64+j);
           printf("\n");
           
    }

    return 0;
}
*/

// OUTPUT::

