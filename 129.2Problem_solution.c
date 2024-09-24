#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}

// OUTPUT::
// Enter a natural number: 10
// The sum of the first 10 natural numbers is: 55

// Enter a natural number: 55
// The sum of the first 55 natural numbers is: 1540

