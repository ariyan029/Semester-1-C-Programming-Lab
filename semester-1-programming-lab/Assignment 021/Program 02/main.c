/*Print all the values of two array (one consists of integers and other of floats ) and their addresses.*/
#include <stdio.h>
int main (){
    int n;
    printf("Enter the number of elements in the integer array: ");
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("The elements of the integer array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The address of element %d is %p\n", i+1, &arr1[i]);
    }
    printf("\n");
    printf("Enter the number of elements in the float array: ");
    scanf("%d", &n);
    float arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%f", &arr2[i]);
    }
    printf("The elements of the float array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The address of element %d is %p\n", i+1, &arr2[i]);
    }
    return 0;
}

// Output:
/*Enter the number of elements in the integer array: 5
Enter the element 1: 4
Enter the element 2: 8
Enter the element 3: 6
Enter the element 4: 2
Enter the element 5: 6
The elements of the integer array are: 4 8 6 2 6 
The address of element 1 is 0x7fffffffcf40
The address of element 2 is 0x7fffffffcf44
The address of element 3 is 0x7fffffffcf48
The address of element 4 is 0x7fffffffcf4c
The address of element 5 is 0x7fffffffcf50*/