#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={5,7,1,5,2};
    int i,sum[size],maxsum;
    for(i=1;i<size-1;i++)
    {
        sum[i-1] = arr[i-1] + arr[i+1];

    }

    maxsum=sum[0];

    for(i=0;i<size;i++)
    {
        if(sum[i]>maxsum)
            maxsum = sum[i];
    }
    printf("max sum is %d",maxsum);
    return 0;
}
