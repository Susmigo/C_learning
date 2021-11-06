#include<stdio.h>
int main()
{
    int a;
    printf("Enter the grade:");
    scanf("%d",&a);
    if (a>=80)
        printf("\nExcellent job!!");
    else if (60<=a && a<80)
        printf("\nnot bad...");
    else
        printf("\noh.. You didn't pass...");
    return 0;
}
