#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0'; j++) {
            for(int k=i;k<=j;k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

/*
OUTPUT::

a
ab
abc
b
bc
c

*/

