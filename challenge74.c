#include<stdio.h>
#define size 11
int main()
{
    int mul[size][size];
    int i,j;
    for(i=1;i<size;i++)
        for(j=1;j<size;j++)
            mul[i][j] = i*j;
    for(i=1;i<size;i++)
        {
            for(j=1;j<size;j++)
                printf("%5d ",mul[i][j]);
            printf("\n");

        }

    return 0;

}
