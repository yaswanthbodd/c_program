#include<stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if((ch=='E')||(ch=='e'))
        printf("Early Bird Ticket");
    else if((ch=='D')||(ch=='d'))
        printf("Discount Ticket");
    else if((ch=='V')||(ch=='v'))
        printf("VIP Ticket");
    else if((ch=='S')||(ch=='s'))
        printf("Standard Ticket");
    else if((ch=='C')||(ch=='c'))
        printf("Child Ticket");
    else
        printf("Invalid");
    //printf("%c",ch);
}
