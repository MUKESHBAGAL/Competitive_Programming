//write a code for merge two array
#include<stdio.h>
int main(){
    int n1,n2,n3,a[100],b[100],c[100],k=0;
    printf("ENTER NUMBER OF ELEMENT IN 1ST ARRY:");
    scanf("%d",&n1);
    printf("ENTER %d ELEMENT IN 1ST ARRAY : ",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("\nENTER NUMBER OF ELEMENT IN 2ND ARRY:");
    scanf("%d",&n2);
    printf("ENTER %d ELEMENT IN 2ND ARRAY : ",n2);
    for(int i=0;i<n2;i++){
            scanf("%d",&b[i]);
      }
    n3=n1+n2;
    for(int i=0;i<n3;i++){
        if(i<n1){
            c[i]=a[i];
        }
        else{
            
        c[i]=b[k];
        k++;
        }
    }
    printf("\nAFTER A MERGE TWO ARRAY: ");
    for(int i=0;i<n3;i++){
            printf("%d ",c[i]);
      }
      printf("\n");
      return 0;
}

/*
OUTPUT::
        ENTER NUMBER OF ELEMENT IN 1ST ARRY:5
        ENTER 5 ELEMENT IN 1ST ARRAY : 1 2 3 4 5
        
        ENTER NUMBER OF ELEMENT IN 2ND ARRY:5
        ENTER 5 ELEMENT IN 2ND ARRAY : 6 7 8 9 10
        
        AFTER A MERGE TWO ARRAY: 1 2 3 4 5 6 7 8 9 10 
        
        
*/
 
