#include<stdio.h>
#define size 3
int main()
{
    int originalarr[size];
    int copyarr[size];
    int i;

    // reading array

    for(i=0;i<size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&originalarr[i]);

        copyarr[i] = originalarr[i];
    }
    printf("\n \n");

    // printing array

    for(i=0;i<size;i++)
    {
        printf("%d copied element is %d\n",i+1,copyarr[i]);

    }
    return 0;
}
