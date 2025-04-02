/*Pointer to Pointer:
Write a program to declare a pointer to a pointer and use it to modify the value of a variable.*/

#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int *p=&a;
    int **p1=&p;
    printf("%d\n%d\n%d\n",*p,**p1,a);
    printf("%p\n%p\n%p\n",*p,**p1,a);


}
