#include <stdio.h>
int main() {
    int num;
    char c;
    
    printf("ENTER A NUMBER TO PRINT HOW MANY TIMES: ");
    scanf("%d", &num);
    printf("ENTER CHARACTER TO PRINT %d LINES LIKE A SQUARE:", num); // Added num to the prompt
    
    // Consume the newline character left in the input buffer
    getchar();
    scanf("%c", &c);
  
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++)
            printf("%c ", c);
        printf("\n");
    }
    
    return 0;
}

// OUTPUT::
// ENTER A NUMBER TO PRINT HOW MANY TIMES: 5
// ENTER CHARACTER TO PRINT 5 LINES LIKE A SQUARE:1
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 
// ENTER A NUMBER TO PRINT HOW MANY TIMES: 6
// ENTER CHARACTER TO PRINT 6 LINES LIKE A SQUARE:A
// A A A A A 
// A A A A A 
// A A A A A 
// A A A A A 
// A A A A A 
// A A A A A 
