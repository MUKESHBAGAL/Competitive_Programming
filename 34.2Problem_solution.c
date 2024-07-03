#include <stdio.h>
int main() {
    int num;

    printf("Enter How many Step in Number Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <=num; i++) {
     for(int j=0;j<num-i;j++)
       printf("  ");
        for (int j = 1; j<=(2*i-1); j++) 
            printf(" %d", j);
    
           printf("\n");
           
    }

    return 0;
}
/*
OUTPUT::
Enter How many Step in Number Pyramid: 4
       1
     1 2 3
   1 2 3 4 5
 1 2 3 4 5 6 7
 
 */
