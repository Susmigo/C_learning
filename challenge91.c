#include<stdio.h>

//Function to print elements
void printElements(int *pArr,int size)
{
    int i;
    printf("Entered Elements are :");
    for(i=0;i<size;i++)
    {
        printf("%d ",pArr[i]);

    }
}

//Function to reverse elements

void reverseArray(int *pRArr , int size)
{
    int i;
    int RArr[size];
    for(i=0;i<=size;i++)
    {
        RArr[size-i] = pRArr[i];

    }
    printElements(RArr,5);

}
// main function


int main()
{
    int Arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&Arr[i]);

    }

    printElements(Arr,5);

    reverseArray(Arr,5);


    return 0;
}
