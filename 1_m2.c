#include<stdio.h>
void main()
{
    int age;
    scanf("%d",&age);
    if(age<15){
        printf("Welcome to the show\n");
        printf("Please note that you should be accompanied by an adult");
    }else{
        printf("Welcome to the show");
    }
}
