#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int n,i,x[26]={0},flag=1,j;
    printf("Enter a String: ");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>= 'A') && (str[i]<= 'Z') ){
            j=str[i]-'A';
            x[j]=1;
        }
        else if((str[i]>= 'a') && (str[i]<= 'z') ){
            j=str[i]-'a';
            x[j]=1;
        }
        else
        continue;
    }
    // for(int i=0;i<26;i++){
    //     printf("%c ",'A' +i);
    // }
    //  printf("\n");
    // for(int i=0;i<26;i++){
    //     printf("%d ",x[i]);
    // }
   
    for(int i=0;i<26;i++){
        if(x[i]==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("\nit is a pangram\n");
    }
    else{
        printf("\nit is not a pangram\n");
    }
}

/*
OUTPUT::
Enter a String: The quick brown fox jumps over the lazy dog

it is a pangram

*/
