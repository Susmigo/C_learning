
#include<stdio.h>
int main()
{
    int d,s;
    double r;
    printf("Enter the distance :");
    scanf("%d",&d);
    printf("Enter the speed of the car:");
    scanf("%d",&s);
    r = (float)d/s;
    printf("The time to reach the distance is : %.3f hours ", r );
    return 0;



}
