
#include<stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return num; // Prime
}

int main(){
    int j;
    printf("Enter a number to print Mersenne Prime numbers: ");
    scanf("%d", &j);
    
    int n = 1;
    while (n < j) {
        int num = isPrime(n);
        if (num) {
            int mul = 1;
            for (int i = 0; i < num; i++) {
                mul *= 2;
            }
            mul -= 1;
            int result = isPrime(mul);
            if (result) {
                printf(" %d ",mul);
            }
        }
        n++;
    }
    printf("\n");
    return 0;
}

// OUTPUT::
// Enter a number to print Mersenne Prime numbers: 10
//  3  7  31  127 


