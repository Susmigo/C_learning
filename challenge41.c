#include<stdio.h>
int main()
{
    int i=1,j;
    printf("Enter number of stars you want :");
    scanf("%d",&j);
    while (i<=j)
    {
         printf("*\n");
         i++;
    }
    return 0;
}
