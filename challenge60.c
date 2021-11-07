#include<stdio.h.>
float calrecarea(float a,float b)
{
    float area;
    area = a*b;
    return area;
}

int main()
{
    float length, width,area;
    printf("Enter the length:");
    scanf("%f",&length);
    printf("Enter the Width:");
    scanf("%f",&width);
    area = calrecarea(length,width);

    printf("the area of Rectangle is %.3f",area);
    return 0;
}
