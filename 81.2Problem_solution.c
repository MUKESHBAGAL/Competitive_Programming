#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete an element (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1; // Exit program with error code
    }

    // Shift elements to the left to delete the element at position 'pos'
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the number of elements in the array

    printf("\nArray after deleting element at position %d:\n", pos);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




// OUTPUT::
// Enter the number of elements in the array: 10
// Enter 10 elements in the array:
// arr[0] = 8
// arr[1] = 12
// arr[2] = 34
// arr[3] = 56
// arr[4] = 23
// arr[5] = 67
// arr[6] = 89
// arr[7] = 13
// arr[8] = 50
// arr[9] = 4
// Enter the position to delete an element (0 to 9): 5

// Array after deleting element at position 5:
// 8 12 34 56 23 89 13 50 4 

