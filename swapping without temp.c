#include<stdio.h>
int main()
{
        int a,b;
        printf("enter the values of a and b:");
        scanf("%d%d",&a,&b);
        printf("before swapping a is %d and b is %d \n\n",a,b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("after swapping a is %d and b is %d \n",a,b);
        return 0;


}
