#include<stdio.h>
int main()
{
    int i,num,res;
    printf("Enter the number for which you need tables:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        res = num*i;
        printf("%d * %d = %d\n",num,i,res);

    }
    return 0;
}
