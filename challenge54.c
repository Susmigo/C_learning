#include<stdio.h>
int main()
{
    int num,a,sum=0;
    int evensum=0,oddsum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        if(a%2==0)
            evensum+=a;
        else
            oddsum+=a;
        num = num/10;
    }

    printf("Result of Evensum %d - oddsum %d is : %d ",evensum,oddsum,evensum-oddsum);
    return 0;


}
