#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if (year%400 ==0)
        printf("leap year");
    else if (year %100 ==0)
        printf("not a leap year");
    else if (year %4 ==0)
        printf("leap year");
    else
        printf("Entered year is not a leap year");

    return 0;
}
