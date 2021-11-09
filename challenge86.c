#include<stdio.h>
#define size 9
int main()
{
    char mainarr[size]={'m','a','l','a','y','a','l','a','m'};
    //char mainarr[size] = {'m','o','m'};
    int i,ispalindrome = 1;

    for(i=0;i<size/2;i++)
    {
        if(mainarr[i] != mainarr[size-1+i])
            ispalindrome = 0;
            break;
    }
    if(ispalindrome ==1)
        printf("It is palindrome !!!!!");
    else
        printf("It is not a palindrome !!!!!");

    return 0;
}
