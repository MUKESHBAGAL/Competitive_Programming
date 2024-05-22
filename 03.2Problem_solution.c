#include <stdio.h>

int main() {
    char str[100], *p;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    p = str;
    int count=0;
    while (*p != '\0') {
        count++;
        if (*p == ' ') {
            printf("\n");
            for(int i=0;i<count;i++)
            printf(" ");
        } else {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
    return 0;
}

// OUTPUT::
// Hello
//       All
//           Dear
//               Students
        
