#include<stdio.h>

// Function to find the second maximum element in the array
int Second_Max_Ele(int arr[], int n){
    int Second_Max = arr[0]; // Initialize Second_Max with the first element
    int temp = arr[0]; // Initialize temp with the first element
    
    for(int i = 1; i < n; i++){
        if(temp < arr[i]){
            Second_Max = temp; // Update Second_Max to the previous temp
            temp = arr[i]; // Update temp to the current element
        } else if (arr[i] > Second_Max && arr[i] < temp) {
            Second_Max = arr[i]; // Update Second_Max if current element is greater than Second_Max and less than temp
        }
    }
    return Second_Max; // Return the second maximum element found
}

// Function to find the second minimum element in the array
int Second_Min_Ele(int arr[], int n){
    int Second_Min = arr[0]; // Initialize Second_Min with the first element
    int temp = arr[0]; // Initialize temp with the first element
    
    for(int i = 1; i < n; i++){
        if(temp > arr[i]){
            Second_Min = temp; // Update Second_Min to the previous temp
            temp = arr[i]; // Update temp to the current element
        } else if (arr[i] < Second_Min && arr[i] > temp) {
            Second_Min = arr[i]; // Update Second_Min if current element is smaller than Second_Min and greater than temp
        }
    }
    return Second_Min; // Return the second minimum element found
}

int main(){
    int n, arr[100]; // Declare variables: n for number of elements, arr for array (size 100)
    
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY: ");
    scanf("%d", &n);
    
    printf("ENTER %d ELEMENTS IN ARRAY: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    if (n < 2) {
        printf("Array should have at least 2 elements to find second maximum and minimum.\n");
        return 1; // Return 1 to indicate error
    }
    
    printf("Second Maximum element in array is : %d\n", Second_Max_Ele(arr, n));
    printf("Second Minimum element in array is : %d\n", Second_Min_Ele(arr, n));
    
    return 0; // Indicate successful completion of program
}

/*
OUTPUT::

	ENTER NUMBER OF ELEMENTS IN ARRAY: 6
	ENTER 6 ELEMENTS IN ARRAY: 40 50 60 10 20 30
	Second Maximum element in array is : 50
	Second Minimum element in array is : 20

*/
