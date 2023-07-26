#include<stdio.h>
void main()
{
    int ticket;
    scanf("%d",&ticket);
    ticket=ticket%10;
    if(ticket == 8 || ticket == 3)
        printf("Lucky Winner");
    else
        printf("Not a Lucky Winner");
}
