#include <stdio.h>

// Function to delete an element at a given position in an array
void delete_Duplicate(int arr[], int *n, int pos) {
    // Shift elements to the left starting from the given position
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Decrease the size of the array
    (*n)--;
}

int main() {
    // Declare variables
    int arr[100], n, i;

    // Prompt user to enter number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Prompt user to enter elements in the array
    printf("Enter %d elements in the array:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to find and delete duplicate elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                // Delete the duplicate element at index j
                delete_Duplicate(arr, &n, j);
                // Decrement j to recheck the current position after deletion
                j--;
            }
        }
    }

    // Print the array after deleting duplicates
    printf("After Delete Duplicate element: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// OUTPUT::
// Enter the number of elements in the array: 6
// Enter 6 elements in the array:10 20 10 30 20 10
// After Delete Duplicate element: 10 20 30 
