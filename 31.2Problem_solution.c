#include <stdio.h>
int main() {
    int num;
    char c;

    printf("Enter How many Step in pyramid: ");
    scanf("%d", &num);
    printf("Enter a Character to print Full Pyramid: ");
    scanf(" %c", &c); 

    for (int i = 0; i <=num; i++) {
     for(int j=0;j<num-i;j++)
       printf(" ");
        for (int j = 0; j <i; j++) 
            printf("%c ", c);
           printf("\n");
    }

    return 0;
}

// OUTPUT::
// Enter How many Step in pyramid: 6
// Enter a Character to print Full Pyramid: *
         
//          * 
//         * * 
//        * * * 
//       * * * * 
//      * * * * * 
//     * * * * * * 

