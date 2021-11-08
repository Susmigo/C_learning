#include<stdio.h>
int main()
{
    int myarr[]={1,4,0,2,9,4,5};
    int i,maxindex;
    maxindex = 0;
    for(i=0;i<7;i++)
    {
        if(myarr[i]> myarr[maxindex])
            maxindex = i;

    }

    printf("Index of max value is %d",maxindex);
    return 0;


}
