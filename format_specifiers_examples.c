/*
Exercise:
Given 10 exercises to practice format specifiers using the "printf" function.
Write down what will be printed at each of them and then make sure of that by
testing the results in Code::Blocks.

*/
#include<stdio.h>
int main ()
{
   printf("We have %d coins in the bank\n", 100); // for integer
   printf("We have %f coins in the bank\n", 125.7); // for float values
    printf("Year = %d\n", 2020);
    printf("Your average grade is: %f \n", 95.13);
     printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
     printf("x = %d, y = %.1f , div = %.3f \n",10,2.501,10/2.5);
     printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
 printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
 printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
     printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
     return 0;
}
