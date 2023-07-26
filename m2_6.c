#include<stdio.h>
void main()
{
    int a1,a2,a3;
    scanf("%d%d%d",&a1,&a2,&a3);
    if((a1!=0 && a2!=0 && a3!=0) && (a1+a2+a3==180)){
    if(!(a1==a2 || a2==a3 || a1==a3)){
        printf("Prize 1");
    }else if((a1==a2)&&(a2==a3)&&(a3==a1)){
        printf("Prize 3");
    }else if((a1==90)||(a2==90)||(a3==90)){
        printf("Prize 2");
    }
    }else{
        printf("No Prize");
    }
}
