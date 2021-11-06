/*
check if a given number is double or triple digit

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if (num > 9 && num < 100)
    {
        printf("%d is a double digit number",num);
    }
    else if (num >99 && num < 1000)
    {
        printf("%d is a Triple digit number",num);
    }
    else
    {
        printf("%d is neither double nor triple",num);
    }
    return 0;
}
