#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]", str);

    // Function to reverse a portion of string from index 'start' to 'end'
    void reverseSubstring(char str[], int start, int end) {
        char temp;
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    // Length of the input string
    int len = strlen(str);

    // Reverse the entire string
    reverseSubstring(str, 0, len - 1);

    // Reverse each word in the reversed string
    int word_start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseSubstring(str, word_start, i - 1);
            word_start = i + 1;
        }
    }

    printf("Reversed Words: %s\n", str);

    return 0;
}

/*
OUTPUT:
        Enter a String: How Are You?
        Reversed Words: You? Are How

*/
