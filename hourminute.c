#include<stdio.h>
#include<stdlib.h>
void main()
{
    float hour;
    float h;
    printf("ENter the hours in decimal: ");
    scanf("%f",&hour);
    while (hour>1)
    {
        h++;
        hour--;
    }
    hour*=60;
    printf("%f:%f",h,hour);
}