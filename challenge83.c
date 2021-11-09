#include<stdio.h>
void findMinMax(int num1,int num2,int *pMax,int *pMin)
{
    if(num1>num2)
    {
        *pMax = num1;
        *pMin = num2;

    }
    else
    {
        *pMax = num2;
        *pMin = num1;
    }
}

void main()
{
    int a=5,b=7;
    int max ,min;
    findMinMax(a,b,&max,&min); // passing by reference
    printf("max between %d and %d is %d\n",a,b,max);
    printf("min between %d and %d is %d\n",a,b,min);

}
