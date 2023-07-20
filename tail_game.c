#include<stdio.h>
void main()
{
    int side,nsquare,i=1,n=0,area;
    printf("Enter the side in cm of square tile\n");
    scanf("%d",&side);
    printf("Enter the number of square tiles available\n");
    scanf("%d",&nsquare);
    while(i*i <= nsquare)
    {
        n=i*i;
        i++;
    }
    area=n*(side*side);
    printf("Area of the largest possible square is %dsqcm",area);

}
