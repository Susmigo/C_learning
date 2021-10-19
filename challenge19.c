
/*
print the sum of quad digit number
*/
#include<stdio.h>
int main()
{
    int num,a,b,c,d;
    printf("Enter the quad digit number:");
    scanf("%d",&num);
    a = num%10;
    num = num/10;
    b = num%10;
    num = num/10;
    c = num%10;
    num = num/10;
    d = num;
    // printf("%d\n%d\n%d",a,b,c);
    printf("\nthe sum of the quad digit number is : %d\n", (a+b+c+d));
    return 0;
}
