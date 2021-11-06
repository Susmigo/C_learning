#include<stdio.h>
int main()
{
    int a[100],size,i,sum=0;
    printf("Enter the  number of elements:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("%d \n",a[size-1]);
    for(i=0;i<size;i++)
    {

        sum = sum+a[i];

    }
    printf("%d",sum);

    return 0;
}
