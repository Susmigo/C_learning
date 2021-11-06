#include<stdio.h>
int main()
{
    int grade;
    do
    {
        printf("Enter the grade:");
        scanf("%d",&grade);

    }while(grade < 0 || grade <100);

    printf("Thanks !! you've inserted %d,which is a legit grade !",grade);
    return 0;
}
