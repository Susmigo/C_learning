#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the numbers: ");
    scanf("%f%f",&a,&b);
    if (a>b)
        {
            printf("%f is maximum\n ",a);
            printf("%f is minimum\n ",b);
        }
    else
       {
            printf("%f is minimum\n ",a);
            printf("%f is maximum\n ",b);

       }
    return 0;
}
