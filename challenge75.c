#include<stdio.h>
#define rsize 2 // defining row size globally
#define csize 3
int main()
{
    int my2dar[rsize][csize];
    int i,j;
    // reading array
    for(i=0;i<rsize;i++)
    {
        for(j=0;j<csize;j++)
        {
            printf("enter [%d] [%d] element :",i,j);
            scanf("%d",&my2dar[i][j]);

        }
    }

    // printing array

    for(i=0;i<rsize;i++)
    {
        for(j=0;j<csize;j++)
        {
            printf(" %d",my2dar[i][j]);



        }
        printf("\n");
    }
    return 0;



}

