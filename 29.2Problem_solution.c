#include <stdio.h>
int main() {
    int num;
    char c, c1;

    printf("Enter How many lines to print characters: ");
    scanf("%d", &num);
    printf("Enter a Character to print %d times in Incremental Order: ", num);
    scanf(" %c", &c);

    for (int i = 0; i < num; i++) {
        c1 = c;
        for (int j = 0; j < num; j++) {
            printf("%c ", c1);
            c1++;
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT::
// Enter How many line to print Character: 5
// Enter a Charater to print 5 time In Increment Order: A
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
