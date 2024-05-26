#include <stdio.h>

int main() {
  int N,i,sum=1;
  printf("Enter a Number: ");
  scanf("%d",&N);
  for(int i=2;i<N;i++){
     if(N%i==0){
         sum=sum+i;
     }
  }
  if(sum==N){
      printf("PERFECT\n");
  }
  else{
      printf("NOT PERFECT\n");
  }
  
    return 0;
}

// OUTPUT::
// Enter a Number: 28
// PERFECT
