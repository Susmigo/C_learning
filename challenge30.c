#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the grade (A-F):");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("\nGrade between 90-100 \n");
        break;
    case 'B':
        printf("\nGrade between 80-89 \n");
        break;
    case 'c':
        printf("\nGrade between 70-79 \n");
        break;
    case 'D':
        printf("\nGrade between 60-69 \n");
        break;
    case 'F':
        printf("\nGrade between 50-59 \n");
        break;
    default:
        printf("\nERROR: Enter correct grade and it is case sensitive!!!!!");
        break;





    }
    return 0;


}
