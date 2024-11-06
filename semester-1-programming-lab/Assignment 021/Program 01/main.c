/*Take n (number of elements in the array) from the user and then take n elements (int or float) from the user and store it in the array .


*/
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%f", &arr[i]);
    }
    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    return 0;
}