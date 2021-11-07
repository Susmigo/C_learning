#include<stdio.h>
int fact(int a)
{
    int result=1;
    for (int i=1;i<=a;i++)
    {
        result*=i;

    }
    return result;
}
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result = fact(num);
    printf("the factorial of %d is %d ",num,result);
    return 0;
}
