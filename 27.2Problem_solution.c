#include <stdio.h>
int main() {
    int a=0,i,n,j;
    printf("ENTER A NUMBER UP TO WE PRINT SERIES: ");
    scanf("%d",&n);
    printf("Series is: %d",a);
    for(i=1;a+i<=n;i++){
        a=a+i;
        printf(" %d",a);
    }
    printf("\n");
    return 0;
}

// // OUTPUT::
// ENTER A NUMBER UP TO WE PRINT SERIES: 50
//Series is: 0 1 3 6 10 15 21 28 36 45
