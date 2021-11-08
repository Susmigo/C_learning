#include<stdio.h>
int main()
{
    int my2darr[2][3] = {{1,5,9},{2,6,10}};
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            printf("array elements [%d][%d] is %d\n",i,j,my2darr[i][j]);


    return 0;

}
