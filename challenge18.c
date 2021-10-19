/*
print the sum of triple digit number
*/
#include<stdio.h>
int main()
{
    int num,a,b,c,temp;
    printf("Enter the triple digit number:");
    scanf("%d",&num);
    a = num/100;
    temp = num%100;
    b = temp/10;
    temp = num%10;
    c = temp;
    //printf("%d\n%d\n%d",a,b,c);
    printf("\nthe sum of the triple digit number %d is : %d\n",num, (a+b+c));
    return 0;
}
