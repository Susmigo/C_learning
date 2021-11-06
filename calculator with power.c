#include<stdio.h>
int main()
{
    int num,pow,res=1,i=1;
    printf("Enter the Number :");
    scanf("%d",&num);
    printf("Enter the Power :");
    scanf("%d",&pow);

    while (i<=pow)
    {
        res = num*res;
        //res*=num
        i++;
    }
    printf("%d power %d is %d",num,pow,res);
    return 0;


}
