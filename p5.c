/*Swap Using Pointers:
Write a function void swap(int *a, int *b) to swap two integers using pointers.*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    int *p1=&a,*p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf(" a=%d\n",*p1);
    printf("b=%d",*p2);


}*/

// pass by reference
/*#include<stdio.h>

void swap(int*,int*);
int main()
{
    int a,b,c;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    //int *a=&x,*b=&y;
    swap(&a,&b);
    printf("x=%d\n",a);
    printf("y=%d\n",b);
}
  void swap(int *a,int*b){
    int c=*a;
    *a=*b;
    *b=c;
    printf(" x=%d\n",*a);
    printf("y=%d",*b);


}*/


// pass by value

#include<stdio.h>

void swap(int,int);
int main()
{
    int a,b,c;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    //int *a=&x,*b=&y;
    swap(a,b);
    printf("x=%d\n",a);
    printf("y=%d\n",b);
}
  void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    printf(" x=%d\n",a);
    printf("y=%d",b);


}
