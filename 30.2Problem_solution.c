#include <stdio.h>
int main() {
    int num;
    char c, c1;

    printf("Enter How many Step in pyramid: ");
    scanf("%d", &num);
    printf("Enter a Character to print like a Right Angle Tringel Shape Pyramid: ");
    scanf(" %c", &c); // Added space before %c to consume newline character

    for (int i = 0; i <=num; i++) {
        c1 = c;
        for (int j = 0; j <i; j++) {
            printf("%c ", c1);
            c1++;
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT::
// Enter How many Step in pyramid: 5
// Enter a Character to print like a Right Angle Tringel Shape Pyramid: A

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

