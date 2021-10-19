/*
find your birth year
*/

#include<stdio.h>
int main()
{
    int current_year,age;
    printf("Enter the current year:");
    scanf("%d",&current_year);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("your birth year is %d",(current_year-age));
    return 0;

}
