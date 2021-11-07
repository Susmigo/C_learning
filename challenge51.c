#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%3 == 0 && i%5 ==0)
        {
            sum = sum+i;
            printf("%d+",i);
        }
    }
    printf("=%d",sum);





    return 0;
}
