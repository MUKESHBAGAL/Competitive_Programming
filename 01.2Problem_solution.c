#include <stdio.h>

int main() {
    char str[100], *p;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            printf("\n");
        } else {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
    return 0;
}


// OUTPUT::

// Enter a string: Hello All Dear Students
// Hello
// All
// Dear
// Students


