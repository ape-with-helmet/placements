#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int a,b=0,h=0,i=0,j=0,k=0,l=0,t=0;
    srand(time(0));
    while (b<100000)
    {
        
        a=rand()%6;
        if (a==0)
        {
            h++;
        }
        else if (a==1)
        {
            i++;
        }
        else if (a==2)
        {
            j++;
        }
        else if (a==3)
        {
            k++;
        }
        else if (a==4)
        {
            l++;
        }
        else
        {
            t++;
        }
        b++;
    }
    printf("%d 1\n%d 2\n%d 3\n%d 4\n%d 5\n%d 6.",h,i,j,k,l,t);
    printf("\nTOTAL: %d",b);
}