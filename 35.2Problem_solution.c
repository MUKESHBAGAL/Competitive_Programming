#include <stdio.h>
int main() {
    int num;

    printf("Enter How many Step in Palindrome Number Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <=num; i++) {
     for(int j=0;j<num-i;j++)
       printf("  ");
        for (int j = 1; j<=i; j++) 
            printf(" %d", j);
       // for (int j =1; j<i; j++) 
        for (int j=i-1; j>=1; j--) 
          printf(" %d", j);
           printf("\n");
           
    }

    return 0;
}

// OUTPUT::
// Enter How many Step in Palindrome Number Pyramid: 5
//          1
//       1 2 1
//      1 2 3 2 1
//   1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1

