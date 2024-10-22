#include<stdio.h>
#include<string.h>
struct student {int roll ; float cgpa ; char name
[20];};
int main (){
    struct student cse [100];
   scanf("%d",&cse[0].roll);
    cse[0].cgpa=100;
    strcpy(cse[0].name,"ariyan");
    printf("Roll:%d\n",cse[0].roll);
    printf("CGPA:%.2f\n",cse[0].cgpa);
    printf("Name:%s\n",cse[0].name);
    return 0;
}
    
    

