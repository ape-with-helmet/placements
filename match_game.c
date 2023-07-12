#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n=21,chance=1,choice;
    while (n>1)
    {
        if (chance==1)
        {
            printf("USER CHANCE...\nEnter input: ");
            scanf("%d",&choice);
            if (choice>4||choice<1)
            {
                printf("Enter between 1 and 4 only!\n\n");
                continue;
            }
            
            n-=choice;
            chance=0;
        }
        else
        {
            choice=5-choice;
            printf("COMPUTER CHOOSES: %d\n",choice);
            n-=choice;
            chance=1;
        }
        printf("%d sticks left\n",n);
    }
    if (chance==1)
    {
        printf("You Lose!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
}