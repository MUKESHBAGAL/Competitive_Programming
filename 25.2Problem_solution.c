#include <stdio.h>
#include <string.h>

int main() {
    int Binary[50], i;
    char str[50];
    printf("ENTER A GRAY CODE TO CONVERT INTO BINARY : ");
    scanf("%s", str);
    int length = strlen(str);
    int Gray[length];
    
    for (i = 0; i < length; i++) {
        Gray[i] = str[i] - '0';
        if (Gray[i] != 0 && Gray[i] != 1) {
            printf("Invalid Input\n");
            return 1;
        }
    }

    Binary[0] = Gray[0];
    printf("Binary code is: %d", Binary[0]);
    
    for (i = 1; i < length; i++) {
        Binary[i] = Binary[i - 1] ^ Gray[i];
        printf("%d", Binary[i]);
    }
    printf("\n");
    return 0;
}

// OUTPUT::
// ENTER A GRAY CODE TO CONVERT INTO BINARY : 1100
// Binary code is: 1000
