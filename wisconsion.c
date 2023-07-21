#include<stdio.h>
void main()
{
    double tsal;
    int wdays,wend;
    printf("Enter the total salary paid\n");
    scanf("%lf",&tsal);
    wend=(tsal-800)/130;
    wdays=wend+10;
    printf("Number of weekday hours is %d\n",wdays);
    printf("Number of weekend hours is %d\n",wend);
}
