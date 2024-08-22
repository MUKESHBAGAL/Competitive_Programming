#include <stdio.h>
int main() {
    int a[100], n, i, j, diff, max,min;

    printf("Enter Number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    max=a[0];
    min=a[0];
    for (i = 0; i < n; i++) {
      if(min>a[i])
        min=a[i];
      if(max<a[i])
        max=a[i];
    }

    printf("Maximum absolute difference between any two elements: %d\n",max-min);

    return 0;
}

// OUTPUT::
            // Enter Number of elements in array: 6
            // Enter 6 elements in the array:
            // 23 34 56 12 76 87
            // Maximum absolute difference between any two elements: 75

