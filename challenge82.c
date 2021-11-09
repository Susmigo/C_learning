#include<stdio.h>
int findmax(int num1, int num2)
{
    if(num1>num2)
        return num1;
    if(num2>num1)
        return num2;
}

int findmin(int num1,int num2)
{
    if(num1<num2)
        return num1;
    else
        return num2;
}



void main()
{
    int a=5,b=7;
    int max,min,minmax;
    max = findmax(a,b);
    min = findmin(a,b);
    printf("max between %d and %d is %d\n",a,b,max);
    printf("min between %d and %d is %d\n",a,b,min);


}
