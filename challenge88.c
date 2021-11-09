#include<stdio.h>
#define size 5
int main()
{
    int arr[size];
    int i,flag=2;
    // reading values

    for(i=0;i<size;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);

    }
    // checking the array
    for(i=1;i<size;i++)
    {
        if(arr[i-1]>arr[i])
        {
            flag = 0;
            break;
        }

        if(arr[i-1]==arr[i])
        {
             flag=1;
        }

    }

    if(flag == 2)
        printf("The array is really sorted!!!!");
    else if(flag == 1)
        printf("The array is sorted!!!!");
   else if(flag ==0)
        printf("The array is not sorted !!!");
    return 0;
}
