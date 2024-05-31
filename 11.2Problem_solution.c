#include <stdio.h>

int main() {
    char str[100], str1[100];
    int i = 0, j, k;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            str1[j++] = str[i++];
        }
        str1[j] = '\0';

        k = j - 1;
        j = 0;
        while (j < k) {
            char temp = str1[j];
            str1[j] = str1[k];
            str1[k] = temp;
            j++;
            k--;
        }
        printf("%s ", str1);

        if (str[i] == ' ') {
            printf(" ");
            i++;
        }
    }
	printf("\n");
    return 0;
}

// OUTPUT::
// Enter a string: Hello All Dear Students
// olleH  llA  raeD  stnedutS 

