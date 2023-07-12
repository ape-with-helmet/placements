#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n,b=25;
    printf("Enter the no of aray elemnets: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemets: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    srand(time(0));
    while(b>0)
    {
        int x=rand()%(n-1);
        int y=rand()%(n-1);
        int temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        b--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("[%d]\t",a[i]);
    }
    
}