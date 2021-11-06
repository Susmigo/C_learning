#include<stdio.h>
int main()
{
   int i,n,j;
   printf("Enter the number:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       if (i<n)
            printf("%d,",i);
        else
            printf("%d",i);

   }
   printf("\n");

    for(j=n;j>=1;j--)
    {
        if (j>1)
            printf("%d,",j);
        else
            printf("%d",j);
    }
    printf("\n");
    j=n;
    while (j>0)
    {
        printf("%d ",j);
        j--;
    }
    return 0;
}
