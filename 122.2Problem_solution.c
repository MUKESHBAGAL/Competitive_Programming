#include<stdio.h>
void asecnding_order(int num);
int main(){
    int num;
    printf("Enter a number up to print number in asending order : ");
    scanf("%d",&num);
    printf("Number in Asecnding Order: ");
    asecnding_order(num);
    printf("\n");
}
void asecnding_order(int num){
    if(num>0){
        asecnding_order(num-1);
        printf("%d ",num);
    }
}

// OUTPUT::
// Enter a number up to print number in asending order : 10
// Number in Asecnding Order: 1 2 3 4 5 6 7 8 9 10 




