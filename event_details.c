#include<stdio.h>
void main()
{
    char ename[50],etype[50];
    char p[10];
    int people;
    double expenses;
    printf("Enter the name of the event\n");
    scanf("%[^\n]s",ename);
    printf("Enter the type of the event\n");
    scanf("%s",etype);
    printf("Enter the number of people expected\n");
    scanf("%d",&people);
    printf("Is it a paid entry?(Type Y or N)\n");
    scanf("%s",p);
    printf("Enter the projected expenses(in lakhs) for this event\n");
    scanf("%lf",&expenses);
    printf("Event Name : %s\nEvent Type : %s\nExpected Count : %d\nPaid Entry : %s\nProjected Expense : %.1lfL",ename,etype,people,p,expenses);
}
