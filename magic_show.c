#include<stdio.h>
void main()
{
    int s1,s2,s3,ts;
    float a1,a2,a3,ta,sa1,sa2,sa3,tsa;
    printf("Enter the number of people who watched show 1\n");
    scanf("%d",&s1);
    printf("Enter the average rating for show 1\n");
    scanf("%f",&a1);
    printf("Enter the number of people who watched show 2\n");
    scanf("%d",&s2);
    printf("Enter the average rating for show 2\n");
    scanf("%f",&a2);
    printf("Enter the number of people who watched show 3\n");
    scanf("%d",&s3);
    printf("Enter the average rating for show 3\n");
    scanf("%f",&a3);
    ts=s1+s2+s3;
    sa1=s1*a1;
    sa2=s2*a2;
    sa3=s3*a3;
    ta=sa1+sa2+sa3;
    tsa=ta/ts;
    printf("The overall average rating for the show is %.2f",tsa);
}
