#include<stdio.h>
#include <string.h>
int  Number_Converter(int num[],int n,int x);
void PrintArray(int num[], int count);
int main(){
    int n,num[16],count;
    printf("Enter a number in Decimal to convert in Octal and Hexadecimal:  ");
    scanf("%d",&n);
    printf("After convert Decimal into Octal and Hexadecimal:");
    count=Number_Converter(num,n,8);
    PrintArray( num, count);
    printf(",");
    count=Number_Converter(num,n,16);
    PrintArray( num, count);
    printf("\n");
    return 0;
    
}
int  Number_Converter(int num[],int n,int x){
    int i=0;
     while(n!=0){
        num[i]=n%x;
        n=n/x;
        i++;
    }
    return i;
}
void PrintArray(int num[], int count) {
    for (int i = count - 1; i >= 0; i--) {
        if (num[i] < 10)
            printf("%d", num[i]);
        else
            printf("%c", 'A' + num[i] - 10);
    }
}


// OUTPUT::
// Enter a number in Decimal to convert in Octal and Hexadecimal:  120
// After convert Decimal into Octal and Hexadecimal:170,78

