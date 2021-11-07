#include<stdio.h>
int main()
{
    int num,var,oddsum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("Enter the %d number:",i);
        scanf("%d",&var);

        if(var % 2 !=0)
            oddsum = oddsum+var;
    }
    printf("the result is : %d",oddsum);
    return 0;
}
