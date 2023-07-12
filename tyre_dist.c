#include<stdio.h>
void main()
{
    int tyres,vehicles,car=0,bike=0;
    printf("Enter the no of tyres and vehicles: ");
    scanf("%d%d",&tyres,&vehicles);
    car=(tyres-vehicles*2)/2;
    bike=vehicles-car;
    printf("No of cars: %d\nNo of bikes: %d",car,bike);
}