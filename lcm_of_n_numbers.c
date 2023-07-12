#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the numeber of integers: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers: ");
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (max<a[i])
        {
            max=a[i];
        }
    }
    int lcm=max;
    printf("%d",max);
    int flag=0;
    while (1)
    {
        printf("...$$\n");
        flag=0;
        for (int i = 0; i < n; i++)
        {
            if (lcm%a[i]==0)
            {
                flag++;
            }
            else
            {
                lcm+=max;
                break;
            }
        }
        if (flag==n)
        {
            break;
        }
        
    }
    printf("%d",lcm);
}