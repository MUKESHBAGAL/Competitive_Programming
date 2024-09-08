#include<stdio.h>

// Function to sort an array in ascending order
void ArraySort(int arr[], int n) {
    int i, j, min, temp; // Declare variables for sorting

    // Selection sort algorithm to sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        min = i; // Initialize min to current index
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) { // Compare elements to sort in ascending order
                min = j; // Update min index if smaller element found
            }
        }
        // Swap arr[i] and arr[min]
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int n1, n2, n3, median; // Declare variables for sizes and median
    int a[100], b[100], c[200]; // Arrays for input and merged output, assuming maximum size
    
    // Input for array a[]
    printf("ENTER NUMBER OF ELEMENT IN 1ST ARRAY:");
    scanf("%d", &n1);
    printf("ENTER %d ELEMENT IN 1ST ARRAY : ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    
    // Input for array b[]
    printf("\nENTER NUMBER OF ELEMENT IN 2ND ARRAY:");
    scanf("%d", &n2);
    printf("ENTER %d ELEMENT IN 2ND ARRAY : ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    n3 = n1 + n2; // Calculate total number of elements after merging
    
    // Merge arrays a[] and b[] into c[]
    for (int i = 0; i < n3; i++) {
        if (i < n1) {
            c[i] = a[i];
        } else {
            c[i] = b[i - n1]; // Start adding elements of b[] after a[]
        }
    }
    
    // Sort the merged array c[] in ascending order
    ArraySort(c, n3);
    
    // Calculate median of the merged array
    if (n3 % 2 == 0) {
        median = (c[n3 / 2 - 1] + c[n3 / 2]) / 2; // Average of middle two elements
    } else {
        median = c[n3 / 2]; // Middle element
    }
    
    // Print the sorted merged array and median
    printf("\nMerged and sorted array:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }
    printf("\nMedian of the merged array: %d\n", median);
    
    return 0;
}

/*
OUTPUT::
ENTER NUMBER OF ELEMENT IN 1ST ARRAY:5
ENTER 5 ELEMENT IN 1ST ARRAY :  2 6 3 8 4

ENTER NUMBER OF ELEMENT IN 2ND ARRAY:6
ENTER 6 ELEMENT IN 2ND ARRAY : 1 5 7 9 41 54 

Merged and sorted array:
1 2 3 4 5 6 7 8 9 41 54 
Median of the merged array: 6

*/
