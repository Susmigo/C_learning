#include<stdio.h>
int main()
{
        int a,b, temp;
        printf("enter the values of a and b:");
        scanf("%d%d",&a,&b);
        printf("before swapping a is %d and b is %d \n\n",a,b);
        temp = a;
        a = b;
        b = temp;
        printf("after swapping a is %d and b is %d \n",a,b);
        return 0;


}
