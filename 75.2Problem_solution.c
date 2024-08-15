#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of row Number Characters '7': ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( i==0 || i+j==n)
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
Enter number of row Number Characters '7': 7
* * * * * * * 
            * 
          *   
        *     
      *       
    *         
  *           

*/
