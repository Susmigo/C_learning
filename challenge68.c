#include<stdio.h>
int main()
{
    int grade[5],i,lgrade;
    for(i=0;i<5;i++)
    {
        printf("Enter %d grade: ",i+1);
        scanf("%d",&grade[i]);

    }
    lgrade =grade[0];
    for(i=1;i<5;i++)
    {
        if(grade[i]<lgrade)
            lgrade = grade[i];
    }
    printf("your lowest grade is %d\n",lgrade);

    for(i=4;i>=0;i--)

        printf("your grades are %d\n",grade[i]);
    return 0;
}
