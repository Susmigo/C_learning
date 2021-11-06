#include<stdio.h>
int main()
{
    int a;
    printf("Enter the grade:");
    scanf("%d",&a);
    if (a>=60)
        {
            printf("\nCongratulations");
        }
    else
       {
            printf("\nfailed.. Try again");
       }
    return 0;
}
