#include<stdio.h>
void main()
{
    double brand,travel,food,log,total;
    printf("Enter branding expenses\n");
    scanf("%lf",&brand);
    printf("Enter travel expenses\n");
    scanf("%lf",&travel);
    printf("Enter food expenses\n");
    scanf("%lf",&food);
    printf("Enter logistics expenses\n");
    scanf("%lf",&log);
    total=(brand+travel+food+log);
    printf("Total expenses : Rs.%.2lf\n",total);

    printf("Branding expenses percentage : %.2lf%%\n",(brand/total)*100);
    printf("Travel expenses percentage : %.2lf%%\n",(travel/total)*100);
    printf("Food expenses percentage : %.2lf%%\n",(food/total)*100);
    printf("Logistics expenses percentage : %.2lf%%\n",(log/total)*100);


}
