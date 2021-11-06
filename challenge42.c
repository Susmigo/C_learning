#include<stdio.h>
int main()
{
    int i=1,j,sum=0,res,grade;
    printf("Enter the number of grades:");
    scanf("%d",&j);
    while (i<=j)
    {
        printf("Enter the grade:");
        scanf("%d",&grade);
        sum+=grade;
        i++;
    }

    res = sum/j;
    printf("Average grade is %.2f",(float)res);

    return 0;

}
