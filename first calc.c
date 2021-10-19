// first calculator using printf
#include<stdio.h>
int main()
{
    printf("addition of %d and %d is: %d \n",5 ,2, 5+2);
    printf("Subtraction of %d and %d is: %d \n",5 ,2, 5-2);
    printf("Multiplication of %d and %d is: %d \n",5 ,2, 5*2);
    printf("Division  of %d and %d is: %d\n",5 ,2, 5/2);
    printf("Remainder  of %d and %d is: %d\n",5 ,2, 5%2);
    return 0;

    /*
     to get proper result use casting concept
    printf("Division  of %d and %d is: %f\n",5 ,2, (float)5/2);
    printf("Remainder  of %d and %d is: %f\n",5 ,2, (float)(5%2));


    */
}
