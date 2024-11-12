//Write a c progam to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100],temp[100];
    int n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    printf("Enter the strings: ");
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("The sorted strings are: ");
    for(int i=0;i<n;i++)
    {
        printf("%s ",str[i]);
    }
    return 0;
}