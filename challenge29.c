#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the money you have:");
    scanf("%d",&a);
    printf("\nEnter the grade you got:");
    scanf("%d",&b);
    if(50<a && b>90) //&& is for performing AND operation  || is used to perform OR operation and ! is for performing NOT operation
    {
        printf("you got money");
    }
    else
    {
        printf("you need not to have money!!!");
    }
    return 0;


}
