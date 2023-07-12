#include<stdio.h>
#include<stdlib.h>
void main()
{
    int change_req;
    printf("Enter the change: ");
    scanf("%d",&change_req);
    printf("%d hundreds %d fifties %d tens %d ones.",change_req/100,(change_req%100)/50,(change_req%50)/10,change_req%10);
}