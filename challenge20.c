/* print reversed number*/

#include<stdio.h>
int main()
{
    int num,a,b,c;
    printf("Enter the number:");
    scanf("%d",&num);
    a = num%10;
    b = (num/10)%10;
    c = (num/100);
    printf("\nThe reversed number is :%d%d%d\n",a,b,c);
    return 0;
}
