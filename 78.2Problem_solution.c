
#include <stdio.h>
int countDuplicate(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }
    return count;
}

int main() {
    int arr[100], n, i,ans;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
   ans= countDuplicate(arr,n);
   printf("Duplicate element in array  %d \n",ans);
   
    return 0;
}

// OUTPUT::
// Enter the number of elements in the array: 8
// Enter 8 elements in the array: 
// arr[0] = 7
// arr[1] = 23
// arr[2] = 45
// arr[3] = 65
// arr[4] = 45
// arr[5] = 23
// arr[6] = 65
// arr[7] = 45
// Duplicate element in array  4 :

