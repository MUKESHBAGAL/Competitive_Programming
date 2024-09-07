#include<stdio.h>
void ArraySort(int arr[], int n);
int main() {
    int arr[100], n, i, k;
    
    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Input the elements of the array
    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the original array
    printf("Given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort the array in ascending order
    ArraySort(arr, n);
    
    // Input the position of the smallest element to find
    printf("\nEnter the position of the smallest element you want to find: ");
    scanf("%d", &k);
    
    // Check if k is within valid range
    if (k < 1 || k > n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Output the kth smallest element (assuming 1-based index)
    printf("The %dth smallest element in the array is: %d\n", k, arr[k - 1]);
    
    return 0;
}

// Function to sort the array in ascending order using Selection Sort
void ArraySort(int arr[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the minimum element with the first element of the unsorted part
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


/*
OUTPUT::

*/

