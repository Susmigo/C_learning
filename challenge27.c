#include<stdio.h>>
int main()
{
  int a,b,c,min,max;
  printf("Enter three values:");
  scanf("%d%d%d",&a,&b,&c);
  max=a;min=b;
  if (a<b)
  {
      min =a;
      max=b;
  }
  if (max<c)
    max=c;
  if (c<min)
    min = c;
  printf("maximum is %d\n",max);
  printf("minimum is %d\n",min);
  return 0;
}
