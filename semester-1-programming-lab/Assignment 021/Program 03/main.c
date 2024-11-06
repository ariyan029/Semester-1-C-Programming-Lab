/*print even index(like 2,4,...)values and print sum of this value */
#include<stdio.h>
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("The element at index %d is %d\n", i, arr1[i]);
            sum += arr1[i];
        }
    }
    printf("The sum of the elements at even indexes is %d\n", sum);
    return 0;
}