#include<stdio.h>
void main()
{
    int age;
    scanf("%d",&age);
    if(age<15 || age>60)
        printf("Not Allowed");
    else
        printf("Allowed");
}
