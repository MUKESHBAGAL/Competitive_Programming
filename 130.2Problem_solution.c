#include <stdio.h>
#include <string.h>

void Reverse_String(char str[], int start, int end) {
    // Base case: if the start index is greater than or equal to the end index
    if (start >= end) {
        return;
    }
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with the next indices
    Reverse_String(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str); // Read a string from the user safely

    // Call the reverse function
    Reverse_String(str, 0, strlen(str) - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

// OUTPUT::
// Enter a string: MUKESH
// Reversed string: HSEKUM

// Enter a string: SHASHWAT
// Reversed string: TAWHSAHS
