#include<stdio.h>
#define rsize 2
#define csize 3
int main()
{
    int my2darr[rsize][csize];
    int i,j;
    // reading array
    for(i=0;i<rsize;i++)
    {
        for(j=0;j<csize;j++)
        {
            printf("Enter [%d] [%d] element : ",i,j);
            scanf("%d",&my2darr[i][j]);

        }
    }

    // printing address of array elements

    for(i=0;i<rsize;i++)
    {
        for(j=0;j<csize;j++)
        {
            printf("[%d] [%d] element is %d and its address is %d\n",i,j,my2darr[i][j],&my2darr[i][j]);

        }
    }


    return 0;
}

