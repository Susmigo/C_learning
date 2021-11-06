/*
print the absolute value of an integer*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("\nAbsolute value of %d is %d",a,abs(a));
    return 0;
}
