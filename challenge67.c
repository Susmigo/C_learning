#include<stdio.h>
void integertodigit(int num,int digit)
{
    int sum =0,count=0,a;
    while(num!=0)
    {
        a = num%10;
        if(a < digit)
            {
                sum = sum+a;
                count+=1;
                num = num/10;
            }
        else
            num = num/10;
    }

    sum = sum/count;
    printf("The average is %d",sum);
}

int main()
{
    int number,digit1;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the digit to compare:");
    scanf("%d",&digit1);
    integertodigit(number,digit1);

    return 0;

}
