#include<stdio.h>
void desecnding_order(int num);
int main(){
    int num;
    printf("Enter a number up to print number in Desecnding order : ");
    scanf("%d",&num);
    printf("Number in Desecnding Order: ");
    desecnding_order(num);
    printf("\n");
}
void desecnding_order(int num){
    if(num>0){
        printf("%d ",num);
        desecnding_order(num-1);
    }
}

// OUTPUT::
// Enter a number up to print number in Desecnding order : 10
// Number in Desecnding Order: 10 9 8 7 6 5 4 3 2 1 
