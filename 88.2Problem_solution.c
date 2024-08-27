#include <stdio.h>

// Function to find the maximum element in the array
int Max_Ele(int arr[], int n) {
    int temp = arr[0]; // Initialize temp with the first element of the array
    for (int i = 1; i < n; i++) { // Loop through the array from index 1 to n-1
        if (temp < arr[i]) // If current element is greater than temp
            temp = arr[i]; // Update temp with current element
    }
    return temp; // Return the maximum element found
}

// Function to find the minimum element in the array
int Min_Ele(int arr[], int n) {
    int temp = arr[0]; // Initialize temp with the first element of the array
    for (int i = 1; i < n; i++) { // Loop through the array from index 1 to n-1
        if (temp > arr[i]) // If current element is smaller than temp
            temp = arr[i]; // Update temp with current element
    }
    return temp; // Return the minimum element found
}

int main() {
    int n, arr[100]; // Declare variables: n for number of elements, arr for array (size 100)

    // Prompt user to enter number of elements in array
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY: ");
    scanf("%d", &n);

    // Prompt user to enter n elements in the array
    printf("ENTER %d ELEMENTS IN ARRAY: ", n);
    for (int i = 0; i < n; i++) { // Loop to input n elements into the array
        scanf("%d", &arr[i]); // Read and store each element in the array
    }

    // Print the maximum and minimum elements in the array using respective functions
    printf("Maximum element in array is : %d\n", Max_Ele(arr, n));
    printf("Minimum element in array is : %d\n", Min_Ele(arr, n));

    return 0; // Indicate successful completion of program
}

/*
OUTPUT::
	ENTER NUMBER OF ELEMENTS IN ARRAY: 6
	ENTER 6 ELEMENTS IN ARRAY: 40 50 60 10 20 30
	Maximum element in array is : 60
	Minimum element in array is : 10

*/
