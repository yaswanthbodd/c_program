#include<stdio.h>
int main()
{
    int l,n,i=1,m=0,a;
    printf("Enter the side in cm of a square tile");
    scanf("%d",&l);
    printf("\nEnter the number of square tiles available");
    scanf("%d",&n);
    while(i*i <= n)
    {
        m=i*i;
        i++;
    }
    a=m*(l*l);
    printf("\nArea of the largest possible square is %dsqcm",a);
    return 0;
}
