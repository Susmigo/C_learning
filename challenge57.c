#include<stdio.h>
void printmaxmin(int num1,int num2)

{
    if (num1>num2)
    {
        printf("maxmimum is %d\n",num1);
        printf("minimum is %d\n",num2);
    }
    else
    {
         printf("maxmimum is %d\n",num2);
        printf("minimum is %d\n",num1);
    }
}

int main()
{
    int a ,b;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printmaxmin(a,b);
    return 0;
}
