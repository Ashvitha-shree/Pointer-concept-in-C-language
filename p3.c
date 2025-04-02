/*Write a program to declare a pointer, assign it the address of an integer variable, and print
the value of the variable using the pointer*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int *p=&a;
    printf("%d",*p);

}
