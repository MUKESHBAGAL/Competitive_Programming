#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of row in 'N' Character: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( j==0 || i==j || j==n-1 )
            printf("* ");
            else
            printf("  ");
        }
     printf("\n");
    }
    return 0;
}

/*
OUTPUT::
Enter number of row in 'N' Character: 8
*             * 
* *           * 
*   *         * 
*     *       * 
*       *     * 
*         *   * 
*           * * 
*             * 

*/
