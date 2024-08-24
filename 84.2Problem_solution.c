//Write a code for a right rotate arry by K position
#include<stdio.h>
#include <stdbool.h>
void  right_Rotate(int arr[], int n);

int main() {
    int arr[100], n, i,k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nHow many position we want to right rotate: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
        right_Rotate(arr, n);
    printf("\nAfter right Rotate array %d position: ",k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void right_Rotate(int arr[], int n) {
    int temp, i;
    temp = arr[n-1]; // Store the last element in temp

    // Shift elements to the right
    for (i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp; // Place the last element at the beginning
}


// OUTPUT::
// Enter the number of elements: 6
// Enter 6 elements in the array:
// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50
// arr[5] = 60
// Given array is: 10 20 30 40 50 60 
// How many position we want to right rotate: 3

// After right Rotate array 3 position: 40 50 60 10 20 30 
