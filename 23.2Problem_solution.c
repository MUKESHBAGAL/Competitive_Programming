#include <stdio.h>
#include <string.h>
int main() {
    char Hexa[100];
    int num, dec = 0, PW = 1; // Start with PW = 1
    printf("Enter a Hexadecimal Integer: ");
    scanf("%s", Hexa);
    int len = strlen(Hexa);
    // Start from the last character of the hexadecimal string
    for (int i = len - 1; i >= 0; i--) {
        // Convert hexadecimal character to decimal number
        if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
            num = Hexa[i] - 'A' + 10;
        else
            num = Hexa[i] - '0';
        // Add to decimal
        dec = dec + num * PW;
        PW *= 16; // Multiply by 16 instead of using pow(16, PW)
    }
    // Convert decimal to octal
    int octal[20], k = 0;
    while (dec != 0) {
        octal[k] = dec % 8;
        dec /= 8;
        k++;
    }
    printf("The equivalent octal number is: ");
    for (int i = k - 1; i >= 0; i--)
        printf("%d", octal[i]);
     printf("\n");
    return 0;
}

// OUTPUT::
// Enter a Hexadecimal Integer: 1AE3
// The equivalent octal number is: 15343
