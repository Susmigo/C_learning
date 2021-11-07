#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%3 == 0 || i%5 == 0)
            sum = sum+i;
    }
    printf("%d\n",sum);


    printf("\n_____optimal solution______\n");
    sum=0;
    for(i=3;i<=num;i+=3)
    {

        sum = sum+i;
    }
    for(i=5;i<=num;i+=5)
    {
         if(i%3!=0)
            sum=sum+i;
    }
     printf("\n%d\n",sum);




    return 0;
}
