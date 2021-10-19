#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    printf("enter the number :");
    scanf("%d",&x);
    a = x*x;
    b = a*a;
    c = a*b;
    d = b*b;
    printf("x^2 is %d\n x^4 is %d\n X^6 is %d\n X^8 is %d\n",a,b,c,d);
    return 0;
}
