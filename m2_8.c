#include<stdio.h>
void main()
{
    int ticketprize,tickets;
    double total;
    scanf("%d%d",&ticketprize,&tickets);
    if(tickets<50){
        total=ticketprize*tickets;
    }else if(tickets <= 100){
        total=(ticketprize*tickets*90)/100;
    }else if(tickets <= 200){
        total=(ticketprize*tickets*80)/100;
    }else if(tickets <= 400){
        total=(ticketprize*tickets*70)/100;
    }else if(tickets <= 500){
        total=(ticketprize*tickets*60)/100;
    }else{
        total=(ticketprize*tickets*50)/100;
    }
    printf("%.2f",total);
}
