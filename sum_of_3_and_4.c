#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a;
    printf("Enter the 5 digit number: ");
    scanf("%d",&a);
    a/=10;
    int x=a%10;
    a/=10;
    int y=a%10;
    printf("Sum of Third and Fourth digit is :%d",x+y);
}