#include<stdio.h>
void main()
{
    int bsal;
    double hra,da,gsal;
    scanf("%d",&bsal);
    if(bsal<15000){
        hra=(bsal*15)/100;
        da=(bsal*90)/100;
    }else{
        hra=5000;
        da=(bsal*98)/100;
    }
    gsal=bsal+hra+da;
    printf("%.2lf",gsal);
}
