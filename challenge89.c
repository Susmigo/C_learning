#include<stdio.h>

int arraysum(int *parr, int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum = sum+parr[i];
    }
    return sum;

}

int main()
{
    int arr[3]= {1,3,10};
    int sum;
    sum = arraysum(arr,3);// by passing array name sends the address of the first element in the array
    printf("%d",arr);
    printf("sum is %d",sum);
    return 0;
}
