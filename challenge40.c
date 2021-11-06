#include<stdio.h>
int main()
{
    int num,pow,res=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the Power:");
    scanf("%d",&pow);

    for (int i=1;i<=pow;i++)
    {
        res = res*num;
    }

    printf("%d^%d is %d",num,pow,res);
    return 0;

}
