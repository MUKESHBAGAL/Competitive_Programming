#include<stdio.h>
int main() {
    int a[100], n, c = 0, c1 = 1, i, j, key, major, flag = 0;
    
    // Input the number of elements in the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // Finding the majority element
    for(i = 0; i < n; i++) {
        key = a[i];
        c = 0; // Reset count for each element
        
        // Count occurrences of key in the array
        for(j = 0; j < n; j++) {
            if(key == a[j])
                c++;
        }
        
        // Update maximum count and check if it's a majority element
        if(c1 < c) {
            c1 = c;
            if(c1 > n / 2) {
                major = key;
                flag = 1; // Flag indicating a majority element is found
            }
        }
    }
    
    // If flag is set, print the majority element
    if(flag == 1)
        printf("Majority element is: %d\n", major);
    else
        printf("No majority element found\n");
    
    return 0;
}

// OUTPUT::
            // Enter number of elements in array: 8
            // Enter 8 elements:
            // 4 8 4 6 4 4 4 8
            // Majority element is: 4
