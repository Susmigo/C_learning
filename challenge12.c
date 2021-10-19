/*
calculate the arithmetic sequence
*/
#include<stdio.h>
int main()
{
    int init, diff,nth,an;
    printf("This program calculates arithmetic progression\n\n");
    printf("\nEnter the initial term :");
    scanf("%d",&init);
    printf("\nEnter the number you want the progression:");
    scanf("%d",&nth);
    printf("\nEnter the difference between the two consecutive numbers:");
    scanf("%d",&diff);
    an = init+(nth-1)*diff;
    printf("\nThe result is : %d\n",an);
    return 0;
}
