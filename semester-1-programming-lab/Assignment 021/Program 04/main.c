/* wap a c program to calculate the multiplication of odd index value in an array */
#include <stdio.h>
int main () 
{
    int n;
    printf("enter the number of elements in the array :");
    scanf ("%d", &n);
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
    int mul = 0;
    for (int i = 0; i < n ; i ++){
    if (i%2 != 0){
     printf("The element at index %d is %d\n", i, arr1[i]);
     mul *= arr1[i];

       }
    
    }
    printf("The multiplication of the elements at odd indexes is %d\n", mul);
    return 0;
    
}


    