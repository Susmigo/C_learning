#include<stdio.h>
void getnine(int length)
{
    for(int i=1;i<=length;i++)
        printf("9");

}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    getnine(number);
    return 0;
}

