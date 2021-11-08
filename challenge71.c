#include<stdio.h>
#define size 5
int main()
{
    int myarr[size];
    int i,hasgoodneighbor =0;
    for(i=0;i<size;i++)
    {
        printf("Enter the %d value: ",i+1);
        scanf("%d",&myarr[i]);
    }

    for(i=1;i<size-1;i++)
    {
        if(myarr[i] == myarr[i-1]*myarr[i+1])
        {
            printf("This array has good neighbours!!!!");
            hasgoodneighbor =1;
            break;
        }
    }
    if(hasgoodneighbor == 0)
        printf("This array doesn't have any good neighbours!!!!");
        return 0;
}
