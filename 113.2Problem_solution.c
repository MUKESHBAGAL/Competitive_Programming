#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 100

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    char word1[MAX_LENGTH], word2[MAX_LENGTH];
    int n;
    
    // Read the list of words
    printf("Enter the number of words: ");
    scanf("%d", &n);
    
    printf("Enter the words:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%s", words[i]);
    }
    
    // Read the two target words
    printf("Enter two words: ");
    scanf("%s %s", word1, word2);
    
    int index1 = -1, index2 = -1;
    int min_distance = INT_MAX;
    
    // Traverse through the list of words
    for (int i = 0; i < n; ++i) {
        if (strcmp(words[i], word1) == 0) {
            index1 = i;
        } else if (strcmp(words[i], word2) == 0) {
            index2 = i;
        }
        
        // Calculate current distance if both words have been found
        if (index1 != -1 && index2 != -1) {
            int current_distance = abs(index1 - index2);
            if (current_distance < min_distance) {
                min_distance = current_distance;
            }
        }
    }
    
    // Output the minimum distance found
    if (min_distance == INT_MAX) {
        printf("Words not found in the list.\n");
    } else {
        printf("Minimum distance between '%s' and '%s' is %d.\n", word1, word2, min_distance);
    }
    
    return 0;
}

/*
OUTPUT::
Enter the number of words: 6
Enter the words:
pen book pad pencil pen book 
Enter two words: pad book
Minimum distance between 'pad' and 'book' is 1.

Enter the number of words: 6                  
Enter the words:
pen book pad pencil marker slate 
Enter two words: pad slate
Minimum distance between 'pad' and 'slate' is 3.


*/
