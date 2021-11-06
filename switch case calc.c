#include<stdio.h>
int main()
{
  int a,b,result;
  char fn;
  printf("Enter the operation (+,-,*,/,%) : ");
  scanf("%c",&fn);
  printf("Enter the two values:");
  scanf("%d%d",&a,&b);


  switch (fn)
  {
  case '+' :
    result = a+b;
    printf("\n Addition of %d and %d is %d ",a,b,result);
    break;
  case '-':
    result = a-b;
    printf("\n Subtraction of %d and %d is %d ",a,b,result);
    break;
  case '*':
    result = a*b;
    printf("\n Multiplication of %d and %d is %d ",a,b,result);
    break;
  case '/':
    result = a/b;
    printf("\n Division of %d and %d is %d ",a,b,result);
    break;
  case '%' :
    result = a%b;
    printf("\n Remainder of %d and %d is %d ",a,b,result);
    break;
  default:
    printf("ERROR !!!! invalid operation");
    break;


  }
  return 0;
}
