#include<stdio.h>
int main()
{
    int myarr[10],i,maxval;
    for(i=0;i<10;i++)
    {
        printf("Enter the %d number :",i+1);
        scanf("%d",&myarr[i]);

    }
    maxval = myarr[0];

    for(i=0;i<10;i++)
    {
        if(maxval < myarr[i])
            maxval = myarr[i];
    }
    printf("The maximum value in your phone number is %d",maxval);
    return 0;
}
