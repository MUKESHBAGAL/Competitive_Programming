// write a code for find kth largest element
#include<stdio.h>

void ArraySort(int arr[], int n);

int main() {
    int arr[100], n, i, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort the array in descending order
    ArraySort(arr, n);
    
    printf("\nEnter the position of the largest element you want to find: ");
    scanf("%d", &k);
    if(k>n){
        printf("Invalid Output by User!!!!");
        return 1;
    }
    // Output the kth largest element (assuming 1-based index)
    printf("The %dth largest element in the array is: %d\n", k, arr[k - 1]);
    
    return 0;
}

// Function to sort the array in descending order using Selection Sort
void ArraySort(int arr[], int n) {
    int i, j, max, temp;
    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        // Swap arr[i] and arr[max]
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}


// OUTPUT::
// Enter the number of elements: 7
// Enter 7 elements in the array: 23 12 45 9 67 32 10
// Given array is: 23 12 45 9 67 32 10 

// Enter the position of the largest element you want to find: 5
// The 5th largest element in the array is: 12
