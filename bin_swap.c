#include<stdio.h>
#include<math.h>
void main()
{
    int n,a=0,i=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>1)
    {
        if (n%2==0)
        {
            a+=pow(2,i);
        }
        n=n/2;
        i++;
    }
    printf("%d",a); 
}