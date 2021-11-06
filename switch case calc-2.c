#include<stdio.h>
int main()
{
    int a,b;
    char oper;
    printf("Enter the operation you want to perform:");
    scanf("%c",&oper);
    printf("\nEnter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);

    switch(oper)
    {
    case '+':
        printf("\naddition of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        printf("\nSubtraction of %d and %d is %d",a,b,a-b);
        break;
    case '*':
        printf("\nMultiplication of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        printf("\nDivision of %d and %d is %d",a,b,a/b);
        break;
    case '%':
        printf("\nRemainder of %d and %d is %d",a,b,a%b);
        break;
    default:
        printf("\nError!!!!! choose the correct operation");
        break;

    }
    return 0;
}
