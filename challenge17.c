#include<stdio.h>
int main()
{
    float x,y;
    int z;
    printf("Enter the number:");
    scanf("%f",&x);
    z = x ;
    y = x-z;
    printf("integer part is : %d\n\n",z);
    printf("decimal part is : %.3f\n\n",y);
    return 0;

}
