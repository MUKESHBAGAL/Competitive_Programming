#include<stdio.h>
int main(){
    int n,sum,sum1=0,arr[100],num;
    printf("ENTER A NUMBER OF ELEMENT IN ARRAY: ");
    scanf("%d",&n);
    if(n>100){
        printf("INVALID INPUT BY USER: ");
        return 1;
    }
    printf("ENTER ELEMENT IN ARRAY IN A 1 TO %d RANGE ONLY:",n);
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("Given Array: ");
    for(int i=1;i<n;i++){
        if(arr[i]>n){
            printf("%d ELEMENT IS OUT OF RANGE OUR RANGE IS 1 TO %d ",arr[i],n);
            return 1;
        }
        printf("%d ",arr[i]);
    }
    sum=n*(n+1)/2;
    for(int i=1;i<n;i++){
        sum1=sum1+arr[i];
    }
    int miss_ele=sum-sum1;
    printf("\nMISSING ELEMENT IN ARRAY IS %d\n",miss_ele);
    arr[n]=miss_ele;
    
    printf("AFTER A FINDING MISSING ELEMENT OUR  ARRAY IS: ");
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

*/
OUTPUT::
	ENTER A NUMBER OF ELEMENT IN ARRAY: 8
	ENTER ELEMENT IN ARRAY IN A 1 TO 8 RANGE ONLY:1 2 4 6 3 5 7
	Given Array: 1 2 4 6 3 5 7 
	MISSING ELEMENT IN ARRAY IS 8
	AFTER A FINDING MISSING ELEMENT OUR  ARRAY IS: 1 2 4 6 3 5 7 8 


*/
