/*Write a c program to count the number of 
alphabets,digits and special character in string.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
            
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            specialChars++;
        }
    }
    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    
    return 0;
}
   
   // Output: Enter a string: hello123@#    
// Alphabets: 5
// Digits: 3
// Special Characters: 3
