// find out the salary of an employee

#include<stdio.h>
int main()
{
  double w,h,s;
  printf("Enter the salary per hour:");
  scanf("%lf",&w);
  printf("Enter the hours worked by an employee:");
  scanf("%lf",&h);
  s = w*h;
  printf("The salary of an employee : %.3lf",s);
  return 0;

}
