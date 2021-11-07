#include<stdio.h>
void generateNumbers(int length)
{
    if (length <=9)
    {
        for (int i=1;i<=length;i++)
            printf("%d",i);

    }
    else
        for (int i=1;i<=length;i++)
            printf("9");

}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    generateNumbers(num);
    return 0;
}
