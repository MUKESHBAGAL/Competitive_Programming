#include<stdio.h>
#include <string.h>
int main(){
    int n,binary[16],limit;
    printf("Enter a number in Decimal to convert in binary:  ");
    scanf("%d",&n);
    //limit = sizeof(binary) - 1;
    /*the limit for the loop using sizeof(binary), but sizeof(binary) gives the size of the array in bytes, not the number of elements. This caused issues with array access. To resolve this, I suggested using sizeof(binary) / sizeof(binary[0]) to calculate the number of elements in the array and set the loop limit appropriately.
    */
    limit = sizeof(binary) / sizeof(binary[0]) - 1;

    while(n!=0){
        binary[limit]=n%2;
        limit--;
        n=n/2;
    }
    while(limit>=0){
        binary[limit]=0;
        limit--;
    }
    for(int i=0;i<16;i++){
        printf("%d",binary[i]);
    }
    printf("\n");
    return 0;
}

// OUTPUT::
// Enter a number in Decimal to convert in binary:  120
// 0000000001111000

