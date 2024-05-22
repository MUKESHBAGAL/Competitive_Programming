#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Taking input until newline character is encountered

    int length = strlen(str);
    int i = 0;
    while (i < length) {
        // Print each word except the last character
        while (str[i] != '\0') {
            if(str[i] == ' ')
            printf("\b");
            if (i != length - 1) {
                printf("%c", str[i]);
            }
            
            i++;
        }
        printf(" "); // Print space between words
        i++;
    }
    printf("\n");
    return 0;
}

