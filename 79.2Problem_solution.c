#include <stdio.h>
void printLTM(int arr[][100], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(j <= i) { // Condition to print only lower triangular elements
                printf("%d ", arr[i][j]);
            }
             else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void printUTM(int arr[][100], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(j >= i) { // Condition to print only upper triangular elements
                printf("%d ", arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int arr[100][100], r, c;

    printf("Enter the number of rows in the array: ");
    scanf("%d", &r);w
    printf("Enter the number of columns in the array: ");
    scanf("%d", &c);
    printf("Enter %d x %d elements in the array: \n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");
    printLTM(arr, r, c);
    printf("Upper Triangular Matrix:\n");
    printUTM(arr, r, c);
    return 0;
}
/*
Enter the number of rows in the array: 4
Enter the number of columns in the array: 4
Enter 4 x 4 elements in the array: 
arr[0][0] = 1
arr[0][1] = 3
arr[0][2] = 5
arr[0][3] = 7
arr[1][0] = 2
arr[1][1] = 4
arr[1][2] = 6
arr[1][3] = 8
arr[2][0] = 9
arr[2][1] = 1
arr[2][2] = 3
arr[2][3] = 5
arr[3][0] = 10
arr[3][1] = 11
arr[3][2] = 13
arr[3][3] = 15
Lower Triangular Matrix:
1 0 0 0 
2 4 0 0 
9 1 3 0 
10 11 13 15 
Upper Triangular Matrix:
1 3 5 7 
0 4 6 8 
0 0 3 5 
0 0 0 15 


*/
