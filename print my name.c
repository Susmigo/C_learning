#include<stdio.h>
void main()
{
    char myname[50];
    printf("Enter your name :");
    scanf("%[^\n]%*c",&myname);
    printf("your name is %s",myname);
}
