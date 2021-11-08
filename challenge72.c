#include<stdio.h>
int main()
{
    int mat[2][3] = {{5,6},{7}};
    int i,j;
    for(i=0;i<=2;i++)
        for(j=0;j<2;j++)
            printf("[%d][%d] = %d\n",i,j,mat[i][j]);
    return 0;
}
