#include<stdio.h>
int main()
{
    int a =5;
    int *p;
    p = &a;
    printf("value :%d\n",a);
    printf("address : %d\n",&a);
    printf("address : %d\n",p);
    printf("address : %p\n",p);
    printf("value :%d\n",*p);
    printf("value :%p\n",*p);

    return 0;
}
