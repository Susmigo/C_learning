#include<stdio.h>
int main()
{
    int num,j;
    printf("Enter the number of required even numbers:");
    scanf("%d",&num);
    for(j=1;j<=num;j++)
    {
        printf("%d ",j*2);
    }
    return 0;




}
