/* program to calculate the distance between in two points)
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,z;
    printf("Enter the first coordinate:");
    scanf("%f%f",&x1,&y1);
    printf("Enter the second coordinate:");
    scanf("%f%f",&x2,&y2);
    z = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("Distance between the two points (%.2f,%.2f) and (%.2f,%.2f) is %.3f\n",x1,y1,x2,y2,z);
    return 0;
}
