/*
farenheit - celsius conversion
*/
#include<stdio.h>
int main()
{
    int f;
    printf("enter the temperature in farenheit:");
    scanf("%d",&f);
    printf("temperature in celsius: %.3lf",(double)(f-32)/1.8); // used casting concept
    return 0;
}
