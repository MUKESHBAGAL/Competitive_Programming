#include<stdio.h>
void Reverse(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main(){
    int n, arr[100];
    
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY: ");
    scanf("%d", &n);
    
    printf("ENTER %d ELEMENTS IN ARRAY: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nBEFORE REVERSING ARRAY ELEMENT: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    Reverse(arr,n);
    printf("\nAFTER REVERSING ARRAY ELEMENT: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

/*
OUTPUT::
        ENTER NUMBER OF ELEMENTS IN ARRAY: 6
        ENTER 6 ELEMENTS IN ARRAY: 10 20 30 40 50 60
        
        BEFORE REVERSING ARRAY ELEMENT: 10 20 30 40 50 60 
        AFTER REVERSING ARRAY ELEMENT: 60 50 40 30 20 10 
*/

