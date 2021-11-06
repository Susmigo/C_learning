#include<stdio.h>>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if ( a == 0 || b == 0 || c == 0)
        printf("cannot be done if entered number is 0");
   else if (a%b == 0 || b%c == 0 || c%a == 0)
        printf("Divisible");
    else
        printf("Non Divisible");
    return 0;
}
