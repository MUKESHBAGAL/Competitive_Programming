#include <stdio.h>
#include <string.h>
int main() {
    // Declare variables
    int a, b;
    char str[100];
    // Prompt the user to enter a binary value
    printf("ENTER A BINARY VALUE TO CONVERT INTO GRAY CODE: ");
    scanf("%[^\n]s", str);
    // Check if the input string is empty
    if (str[0] == '\0') {
        printf("Input string is empty. Exiting...\n");
        return 1; // Exit with error code 1
    }
    // Calculate the length of the input string
    int length = strlen(str);
    // Convert the input string into an array of integers
    int arr[length];
    for (int i = 0; i < length; i++) {
        arr[i] = str[i] - '0';
    }
    // Print the first element of the array (unchanged in Gray code)
    printf("GRAY CODE OF BINARY VALUE IS : %d", arr[0]);
    // Generate the Gray code
    for (int i = 0; i < length - 1; i++) {
        a = arr[i];
        b = arr[i + 1];
        if (a == b) {
            printf("0");
        } else {
            printf("1");
        }
    }
    // Print a newline for better formatting
    printf("\n");
    return 0;
}

/*
OUTPUT::
ENTER A BINARY VALUE TO CONVERT INTO GRAY CODE: 1100
GRAY CODE OF BINARY VALUE IS : 1010

ENTER A BINARY VALUE TO CONVERT INTO GRAY CODE: 1001001
GRAY CODE OF BINARY VALUE IS : 1101101

ENTER A BINARY VALUE TO CONVERT INTO GRAY CODE: 1101101
GRAY CODE OF BINARY VALUE IS : 1011011

*/
