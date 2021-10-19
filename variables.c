#include<stdio.h>
int main()
{
    int a,b;
    double c;
    printf("enter the grade1 :");
    scanf("%d",&a);
    printf("enter the grade2: ");
    scanf("%d", &b);
    c = (a+b)/2;
    printf("average = %f",c);
    return 0;
}
