#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum =sum+i;
        if (i!=num)
            printf("%d+",i);
        else
            printf("%d",i);
    }

    printf("= %d",sum);

    return 0;
}
