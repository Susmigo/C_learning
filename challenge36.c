#include<stdio.h>
int main()
{
    int hr,min,sec,rsec;
    printf("Enter the Seconds:");
    scanf("%d",&sec);
    hr = sec/3600;
    min = (sec-hr*3600)/60;
    rsec = (sec-hr*3600)%60;
    if (hr<10 && min<10)
       printf("\n 0%dH:0%dM:%dS",hr,min,rsec);
    else
        printf("\n %dH:%dM:%dS",hr,min,rsec);


    return 0;
}
