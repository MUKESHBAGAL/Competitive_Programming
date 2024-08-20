#include <stdio.h>

int main() {
  int a[100],b[100],n,i;
  printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements for array 'a':\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
     printf("Array 'a' before swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0;i<n;i+=2){
        if(i==n-1)
        b[i]=a[i];
        else{
        b[i]=a[i+1];
        b[i+1]=a[i];
        }
    }
    printf("Array 'b' after copying from 'a': ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT::
Enter number of elements in array: 5
Enter 5 elements for array 'a':
1 2 3 4 5
Array 'a' before swapping: 1 2 3 4 5 
Array 'b' after copying from 'a': 2 1 4 3 5 

*/
