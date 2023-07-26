#include<stdio.h>
void main()
{
    int hf,spf,sf;
    scanf("%d %d %d",&hf,&spf,&sf);

   if(hf>50){
    if(spf>60){
        if(sf>100){
            printf("10");
        }else{
            printf("9");
        }
    }else if(sf>100){
        printf("7");
    }else{
        printf("6");
    }
   }else if(spf>60){
        if(sf>100){
            printf("8");
        }else{
            printf("6");
        }
   }else if(hf>50 || spf>60 || sf>100)
        printf("6");
    else
        printf("5");
}
