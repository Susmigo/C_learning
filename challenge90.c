#include<stdio.h>
void resetElementsToZero(int *pArr ,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        pArr[i] =0;
    }

}
void printArr(int *pArr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",pArr[i]);
    }
}
int main()
{
    int Arr[3] ={1,3,10};
    printf("Before reset \n");
    printArr(Arr,3);
    printf("\n");
    resetElementsToZero(Arr,3);
    printf("After reset \n");
    printArr(Arr,3);
    return 0;

}
