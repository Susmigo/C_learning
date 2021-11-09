#include<stdio.h>
void swap(int num1,int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;



}
int main()
{
    int num1,num2;
    printf("Enter the number 1 :");
    scanf("%d",&num1);
    printf("Enter the number 2 :");
    scanf("%d",&num2);
    printf("num1 before swap = %d \n",num1);
    printf("num2 before swap = %d \n",num2);

    //calling swap function

    swap(num1,num2);


    printf("num1 after swap = %d \n",num1);
    printf("num2 after swap = %d \n",num2);
    return 0;
}
