/*
celsius - farenheit conversion
*/

#include<stdio.h>
int main()

{
    double c ,f;
    printf("enter the temperature in celsius:");
    scanf("%lf",&c);
    f = (c*1.8)+32;
    printf("temperature in farenheit : %.3lf",f);
    return 0;
}
