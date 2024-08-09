#include<stdio.h>

int main() {
    int n=7;
    int i, j;
    printf("Enter number of row Number Characters '1': ");
    scanf("%d", &n);
    if(n<3){
        printf("Invalid Input By user!!\n");
        return 1;
    }
    int num =n/2; 
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
              if(i==n || j==num+1 ||j+i==num+1 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


// // OUTPUT::
// Enter number of row Number Characters '1': 7


//                 * *       
//               *   *       
//             *     *       
//                   *       
//                   *       
//                   *       
//             * * * * * * *  



