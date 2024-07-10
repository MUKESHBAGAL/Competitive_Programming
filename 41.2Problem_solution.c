#include <stdio.h>
int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        // Print the numbers
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("%d", i);
            } else {
                printf("%d * ", i);
            }
        }
        printf("\n");
    }
    for (int i =n; i >= 1; i--) {
        // Print the numbers
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("%d", i);
            } else {
                printf("%d * ", i);
            }
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:: 
1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
4 * 4 * 4 * 4
3 * 3 * 3
2 * 2
1

*/

