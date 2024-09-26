#include <stdio.h>
#include <stdlib.h>
// Function to calculate the sum of an array using recursion
int recursive_sum(int arr[], int n) {
    // Base case: if n is 0, return 0 (no elements to sum)
    if (n <= 0) {
        return 0;
    } else {
        // Recursive case: sum the last element and the sum of the rest
        return arr[n - 1] + recursive_sum(arr, n - 1);
    }
}
int main() {
    int n;
    // Prompt user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Dynamically allocate memory for the array
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Prompt user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    // Calculate the sum using the recursive function
    int result = recursive_sum(array, n);
    printf("The sum of the array is: %d\n", result);
    // Free allocated memory
    free(array);

    return 0;
}

// OUTPUT::
//         Enter the number of elements in the array: 5
//         Enter the elements of the array:
//         1 2 3 4 5
//         The sum of the array is: 15
        
//         Enter the number of elements in the array: 8
//         Enter the elements of the array:
//         84 54 41 87 71 32 14 76 
//         The sum of the array is: 459
        


