#include<stdio.h>
int main()
{
    int grade1,grade2;
    int *p,*q;
    printf("Enter grade1:");scanf("%d",&grade1);
    printf("Enter grade2:");scanf("%d",&grade2);

    p = &grade1;
    q = &grade2;


    printf("grade 1 value : %d\n",*p);
    printf("grade 2 value : %d\n",*q);
    printf("grade 1 address : %p\n",p);
    printf("grade 2 address : %p\n",q);

    return 0;




}
