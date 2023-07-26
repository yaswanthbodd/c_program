#include<stdio.h>
void main()
{
    char c1[10],c2[10],c3[10];
    int n1,n2,n3;
    scanf("%s%d",c1,&n1);
    scanf("%s%d",c2,&n2);
    scanf("%s%d",c3,&n3);
    if( (n1==n2)==n3 || (c1==c2)==c3 )
        printf("Double Bonanaza");
    else
        printf("No Bonanza");
}
