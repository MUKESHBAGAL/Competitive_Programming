// Online C compiler to run C program online
#include <stdio.h>

int main() {
  char str[100],temp;
  int i=0;
  printf("Enter a String : ");
  scanf("%[^\n]",str);
  while(str[i]!='\0' && str[i+1]!='\0'){
      temp=str[i];
      str[i]=str[i+1];
      str[i+1]=temp;
      i=i+2;
  }
  printf("After reverse two Character: %s\n",str);
    return 0;
}

// OUTPUT:: 
// nter a String : Hello Everyone
// After reverse two Character: eHll ovEreoyen
