#include <stdio.h>

int main() {
    int num;
    printf("Enter Number of steps in Hollow Rectangle: ");
    scanf("%d", &num);
    if (num % 2 == 0 || num < 3) {
        printf("INVALID OUTPUT !!\n");
        return 1;
    }
    for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= num; j++) {
        if (i == 1 || j == 1 || i == num || j == num || i == j || i + j == num + 1){
            printf("* ");
        }
        else
            printf("  ");
    }
    printf("\n");
    }
    return 0;
}
/*
OUTPUT::
Enter Number of steps in Hollow Rectangle: 7
* * * * * * * 
* *       * * 
*   *   *   * 
*     *     * 
*   *   *   * 
* *       * * 
* * * * * * * 


*/

