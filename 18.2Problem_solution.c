#include<stdio.h>

int main() {
    int num, sum = 0, rem, x = 8, n = 0, y = 1;
    printf("Enter an Octal number to convert into decimal: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Negative numbers are not supported.\n");
        return 1; 
    }
    while(num > 0) {
        rem = num % 10;
        if(rem >8) { // Octal digits range from 0 to 7
            printf("Invalid Input\n");
            return 1; 
        }
        // NO NEED FOR LOOP
        
        // y = 1;
        // for(int i = 0; i < n; i++) {
        //     y = y * x;
        // }
        // if(n == 0) {
        //     y = 1;
        // }
        sum = sum + (rem * y);
        y = y * x; // Update the positional value
        num = num / 10;
        n++;
    }
    printf("Decimal representation: %d\n", sum);
    
    return 0;
}


/*
OUTPUT::
Enter an Octal number to convert into decimal :28
Decimal representation: 24

Enter an Octal number to convert into decimal :140
Decimal representation: 96

Enter an Octal number to convert into decimal :-10
Negative numbers are not supported.

*/

/*
#include <stdio.h>

int main() {
    long int n;
    int count = 0, oct = 0, result[100], j = 0, rem, i = 1;
    
    printf("Enter binary value: ");
    scanf("%ld", &n);
    
    while (n != 0) {
        rem = n % 10;
        oct = oct + rem * i;
        i = i * 2;
        count++;
        if (count == 3) {
            count = 0;
            result[j] = oct;
            oct = 0;
            i = 1;
            j++;
        }
        n = n / 10;
    }
    
    if (count != 0) { // To handle remaining bits if not a multiple of 3
        result[j] = oct;
        j++;
    }
    
    printf("Octal equivalent: ");
    while (j > 0) {
        printf("%d", result[--j]);
    }
    
    return 0;
}

*/


