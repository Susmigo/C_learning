#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter X co-ordinate:");
    scanf("%d",&a);
    printf("Enter Y co-ordinate:");
    scanf("%d",&b);

    if (a >0 && b >0)
        printf("(%d,%d) is in First Quadrant",a,b);
    else if (a<0 && b>0)
        printf("(%d,%d) is in Second Quadrant",a,b);
    else if (a<0 && b<0)
        printf("(%d,%d) is in Third Quadrant",a,b);
    else if (a>0 && b<0)
        printf("(%d,%d) is in Fourth Quadrant",a,b);
    else
        printf("(%d,%d) is At origin",a,b);
    return 0;


}
