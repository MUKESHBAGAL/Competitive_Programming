#include <stdio.h>

int main() {
  int N,i,sum=0;
  printf("Enter a Number: ");
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
      sum=sum+i;
      if(sum==N){
          printf("YES\n");
          break;
      }
  }
  if(sum!=N){
      printf("NO\n");
  }
    return 0;
}
