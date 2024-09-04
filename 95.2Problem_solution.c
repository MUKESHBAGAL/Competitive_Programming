#include<stdio.h>
int main() {
    int n, i, j, count = 0, sum, arr[100];

    // Input the number of elements in the array and the target sum
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter the sum to count pairs with given sum: ");
    scanf("%d", &sum);

    // Input the elements of the array
    printf("Enter %d elements in array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Print the array elements
    printf("Our Given array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Check pairs that sum up to the given sum
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                count++;
                printf("\n%d Pair of sum (%d,%d)",count, arr[i], arr[j]);
            }
        }
    }

    // Print the total number of pairs found
    printf("\nTotal number of pairs with the given sum: %d\n", count);

    return 0;
}

// OUTPUT::

// Enter number of elements in array: 6
// Enter the sum to count pairs with given sum: 10
// Enter 6 elements in array: 3 5 2 7 8 1
// Our Given array is: 3 5 2 7 8 1 
// 1 Pair of sum (3,7)
// 2 Pair of sum (2,8)
// Total number of pairs with the given sum: 2

