#include<stdio.h>
int main ()
{
    int i,r;
    printf("Enter the number upto you need odd numbers:");
    scanf("%d",&r);

    for(i=0;i<=r;i++)
    {
        if (i%2 !=0)
            printf("%d\n",i);
    }
    return 0;
}
