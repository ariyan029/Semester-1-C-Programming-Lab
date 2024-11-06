#include <stdio.h>

int main() {
    int originalArray[10];
    int reversedArray[10];
    
    // Input 10 numbers into the original array
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &originalArray[i]);
    }
    
    // Reverse the original array into the new array
    for (int i = 0; i < 10; i++) {
        reversedArray[i] = originalArray[9 - i];
    }
    
    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", reversedArray[i]);
    }
    
    return 0;
}