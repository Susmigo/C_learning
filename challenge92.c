#include<stdio.h>
#define asize 5


void swapElements(int *pArr1,int *pArr2 ,int size)
{
    int i;
    int sArr[size];
    for(i=0;i<size;i++)
    {
        sArr[i] = pArr1[i];
        pArr1[i] = pArr2[i];
        pArr2[i] = sArr[i];


    }
    printf("\n     After swapping       \n");

    printf(" Array 1 elements are :");
    printer(pArr1,5);
    printf("\n Array 2 Elements are:");
    printer(pArr2,5);


}

void printer(int *pArr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",pArr[i]);
    }
}


//main function


int main()
{
    int array1[asize] = {1,3,6,8,10};
    int array2[asize] = {2,2,4,11,17};

    printf("     Before swapping       \n");
    printf("Array 1 Elements are:");
    printer(array1,5);
    printf("\n");
    printf("Array 2 Elements are:");
    printer(array2,5);

    swapElements(array1,array2,5);
}
