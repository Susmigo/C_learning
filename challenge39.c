/*

program to find the next day
*/#include<stdio.h>
int main()
{

    int d,m,y;
    int lp=0;
    printf("Enter the day:");
    scanf("%d",&d);
    printf("Enter the month:");
    scanf("%d",&m);
    printf("Enter the year:");
    scanf("%d",&y);

    if (m == 2)
        if (y%4 ==0 && (y%100 !=0 || y%400 ==0))
            lp=1;
    d+=1; // day = day +1;

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d<=31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (d<=30)
            break;
    case 2:
        if (d<=29 && lp ==1)
            break;
        else if (d<=28)
            break;
    default:
        d=1;
        m+=1;
        if (m>12)
        {
            m=1;
            y+=1;

        }
        break;


    }

    printf("the next day is :%d/%d/%d\n ",d,m,y);
    return 0;




}
