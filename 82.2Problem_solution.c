
//insertion of array in zero index
#include<stdio.h>
int main(){
    int arr[100],n,i,x,pos=-1;
    printf("\nEnter Number Number of array; ");
    scanf("%d",&n);
    printf("\nEnter %d Element in array:\n",n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
        printf("Enter Location we want to Insert a New Element: ");
        scanf("%d",&pos);
        printf("\nEnter array element we want insert at %d given location: ",pos);
        scanf("%d",&x);
         for(i=n-1;i>=pos;i--){
             //we shift element right side and increase value of n 
         arr[i+1]=arr[i];//here we shift element incresing the index
        }
        arr[pos]=x;//our program purpose we insert element in zero index
        n++;
       printf("\nDisplay array after one element insert in index zero; ");//after perform all operation print array 
        for(i=0;i<n;i++){
       printf("%d ",arr[i]);
       } 
       printf("\n");
       
       return 0;
}


//OUTPUT::
            // Enter Number Number of array; 6
            
            // Enter 6 Element in array:
            // arr[0]=12
            // arr[1]=34
            // arr[2]=56
            // arr[3]=78
            // arr[4]=98
            // arr[5]=45
            // Enter Location we want to Insert a New Element: 3
            
            // Enter array element we want insert at 3 given location: 62
            
            // Display array after one element insert in index zero; 12 34 56 62 78 98 45 
