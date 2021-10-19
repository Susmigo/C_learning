#include<stdio.h>
int main()
{

    int sec,min,hr,resec;
    printf("Enter the seconds:");
    scanf("%d",&sec);
    hr = sec/3600;
    min = (sec-hr*3600)/60;
    resec = (sec-hr*3600)%60;
    printf("Hours:Minutes:Seconds = %d:%d:%d\n\n",hr,min,resec);
    return 0;


}
