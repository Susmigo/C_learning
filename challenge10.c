/*
write a program that gets 3 grades (int) from the user and prints the exact average
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three grades:");
    scanf("%d%d%d",&a,&b,&c);
    printf("average is :%.3f",(float)(a+b+c)/3);

    return 0;
}
