#include<stdio.h>
int main(void)
{
    double mileage;
    double fuel;
    float mile_per_fuel;
    float km;
    float liter;
    float lite_per_km;

    printf("Please enter your miles and fuel\n");
    scanf("%lf %lf",&mileage,&fuel);

    mile_per_fuel= mileage/fuel;
    km = mileage * 1.609;
    liter = fuel * 3.785;
    lite_per_km = liter/100*km;
    printf("Your mile per fule is %.2f\n and your fuel per 100km is %.2f",mile_per_fuel,lite_per_km);
}