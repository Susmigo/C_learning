/*
calculate the rectangle area
*/

#include<stdio.h>
int main()
{
    float height,width; // use double instead of float
    printf("enter height:");
    scanf("%f",&height); // %f is for float and %lf is for double
    printf("enter width:");
    scanf("%f",&width);
    printf("Area of the rectangle is :%.2f",(height*width)); //%lf is used for representing double float
    return 0;
}
