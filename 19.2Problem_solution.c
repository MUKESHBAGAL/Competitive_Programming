#include <stdio.h>
#include <string.h>
int binary_to_decimal(int arr[], int length);
int decimal_to_octal(int num[], int n, int x);
int main() {
    char str[100];
    printf("Enter the binary value to convert to decimal: ");
    scanf("%s", str);
    int length = strlen(str);
    int arr[length]; // Integer array to store the converted digits
    // Convert each character of the string to integer and store in the array
    for (int i = 0; i < length; i++) {
        arr[i] = str[i] - '0'; // Convert character to integer
    }
    int decimal_num = binary_to_decimal(arr, length);
    int num[100]; // Array to store octal digits
    int result = decimal_to_octal(num, decimal_num, 8);

    printf("Octal representation: ");
    for (int i = result - 1; i >= 0; i--) {
        printf("%d", num[i]);
    }
    printf("\n");

    return 0;
}
int binary_to_decimal(int arr[], int length) {
    int y, sum = 0, count = 0;
    for (int i = length - 1; i >= 0; i--) {
        y = 1;
        for (int j = 0; j < count; j++) {
            y = y * 2;
        }
        if (count == 0) {
            y = 1;
        }
        sum = sum + (arr[i] * y);
        count++;
    }
    return sum;
}
int decimal_to_octal(int num[], int n, int x) {
    int i = 0;
    while (n != 0) {
        num[i] = n % x;
        n = n / x;
        i++;
    }
    return i;
}
// OUTPUT::
// Enter the binary value to convert to decimal: 00010101
// Octal representation: 25

