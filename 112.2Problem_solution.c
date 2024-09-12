#include<stdio.h>
#include<string.h>
// Function to convert a single Roman numeral character to its corresponding integer value
int ROMAN_TO_NUMBER(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;  // Return -1 if the character is not a valid Roman numeral
    }
}
int main(){
    char str[100];
    int n1, n2, result = 0;

    printf("Enter a Roman Number: ");
    scanf("%s", str);  // Read input Roman numeral string

    // Validate the input Roman numeral string
    for(int i = 0; i < strlen(str); i++){
        // Check if current character is not a valid Roman numeral
        if(str[i] != 'I' && str[i] != 'V' && str[i] != 'X' &&
           str[i] != 'L' && str[i] != 'C' && str[i] != 'D' && str[i] != 'M'){
            printf("Invalid Input: Roman numeral should only contain 'I', 'V', 'X', 'L', 'C', 'D', 'M'\n");
            return 1;  // Exit program with error code
        }
    }
    // Iterate through each character in the validated input string
    for(int i = 0; i < strlen(str); i++){
        n1 = ROMAN_TO_NUMBER(str[i]);  // Convert current character to integer

        // Check if there's a next character
        if(str[i + 1] == '\0'){
            result = result + n1;  // If no next character, add current value to result
        } else {
            n2 = ROMAN_TO_NUMBER(str[i + 1]);  // Convert next character to integer

            // Compare current and next values to decide addition or subtraction
            if(n1 >= n2){
                result = result + n1;  // If current value >= next value, add current value
            } else {
                result = result + (n2 - n1);  // If current value < next value, subtract current value
                i++;  // Skip next character since it has been used
            }
        }
    }
    printf("Integer value: %d\n", result);  // Print the final computed integer value
    return 0;
}

// OUTPUT::
//Enter a Roman Number: IX
//Integer value: 9
// Enter a Roman Number: MCMIX
// Integer value: 1909
