#include<stdio.h>
int iseven(int a)
{
    if(a%2 ==0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if (iseven(num)== 1)
        printf("Even number");
    else if (iseven(num) == 0)
        printf("odd number");
    return 0;
}
