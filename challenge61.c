#include<stdio.h>
void findmax(int a)
{
    int b;

    if (a>=10 && a<=99)
    {
        b = a%10;
        if (b > a/10)
            {
                printf("Maximum digit = %d",b);

            }
        else
            {
                printf("Maximum digit = %d",a/10);

            }
    }
    else
        printf("ERROR! Not a 2-digit number");

}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    findmax(num);
    return 0;

}
