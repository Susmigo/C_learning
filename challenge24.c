#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("\n%d is maximum value",a);
    }
    else
    {
        printf("\n%d is maximum value",b);
    }
    return 0;

}
