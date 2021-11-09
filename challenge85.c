#include<stdio.h>
#define size 6
int main()
{
    int mainarr[size]={1,2,3,3,2,1};
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
