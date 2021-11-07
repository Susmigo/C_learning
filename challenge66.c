#include<stdio.h>
char toLower(char let)
{
    if (let >= 'A' && let <= 'Z')
        return let = let - 'A'+'a';
    else
        return -1;
}
char toUpper(char let)
{
    if (let >= 'a' && let <= 'z')
        return let = let - 'a'+'A';
    else
        return -1;
}
int main()
{
    char a;
    printf("Enter the character:");
    scanf("%c",&a);



    if(toLower(a)!=-1)
        printf("lower case of %c is %c",a,toLower(a));
    else
        printf("check the entered character!!!");
    return 0;
}
