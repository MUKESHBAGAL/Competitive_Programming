#include<stdio.h>

int main(){
    int n = 5;
    
    for(int i =1; i <= n; i++){
        // Print spaces
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
      for(int j=1;j<=2*i-1;j++){
         if(j==1)
         printf("%d ",j);
         else if(j==2*i-1)
         printf("%d ",i);
         else if(i==n && j%2==1)
         printf("%d ",(j+1)/2);
         else 
         printf("  ");
      }
        printf("\n");
    }

    return 0;
}

/*
OUTPUT:
        1 
      1   2 
    1       3 
  1           4 
1   2   3   4   5 

*/
