#include<stdio.h>
#include <stdbool.h>
void  Left_Rotate(int arr[], int n);

int main() {
    int arr[100], n, i,k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nHow many position we want to Left rotate: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
        Left_Rotate(arr, n);
    printf("\nAfter Left Rotate array %d position: ",k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void Left_Rotate(int arr[], int n) {
    int temp, i;
    temp = arr[n-1]; // Store the last element in temp

    // Shift elements to the Left
    for (i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp; // Place the last element at the beginning
}

/*
OUTPUT::
        Enter the number of elements: 6
        Enter 6 elements in the array:
        10 20 30 40 50 60
        Given array is: 10 20 30 40 50 60 
        How many position we want to Left rotate: 3
        
        After Left Rotate array 3 position: 40 50 60 10 20 30 

*/

