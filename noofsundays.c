#include<stdio.h>
#include<stdlib.h>
int check_leap(int year)
{
    if ((year%400==0)||((year%4==0)&&(year%100!=0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int counter(int year, int month, int f_date)
{
    int no_of_sundays=0,count=0;
    if (month==2)
    {
        int leap=check_leap(year);
        if (leap==0)
        {
            count=(28-f_date)/7;
            count++;
        }
        else
        {
            count=(29-f_date)/7;
            count++;
        }
        return count;
    }
    else if (month==1||month==3||month==5||month==6||month==8||month==10||month==12)
    {
        count=(31-f_date)/7;
        count++;
        return count;
    }
    else
    {
        count=(30-f_date)/7;
        count++;
        return count;
    }
}
void main()
{
    int month, year, f_date;
    printf("Enter the month, year and the date of first sunday: ");
    scanf("%d%d%d",&month,&year,&f_date);
    printf("No of sundays in the month %d of the year %d are: %d",month,year,counter(year,month,f_date));
}