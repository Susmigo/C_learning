#include<stdio.h>
float averagebw3num(int a,int b,int c)
{
    float avg;
    avg = (a+b+c)/3.0;
    return avg;

}

int main()
{

   int num1,num2,num3;
   float avg1;
   printf("Enter num1;");
    scanf("%d",&num1);
    printf("Enter num2;");
    scanf("%d",&num2);
    printf("Enter num3;");
    scanf("%d",&num3);
   avg1 = averagebw3num(num1,num2,num3);
    printf("%.3f",avg1);
    return 0;

}
