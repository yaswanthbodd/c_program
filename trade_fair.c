#include<stdio.h>
void main()
{
    int x,total;
    printf("Enter the total number of people\n");
    scanf("%d",&total);
    x=total*2/7;
    printf("Number of attendees on day 1 : %d\n",x);
    printf("Number of attendees on day 2 : %d\n",2*x);
    printf("Number of attendees on day 3 : %d\n",x/2);

}
