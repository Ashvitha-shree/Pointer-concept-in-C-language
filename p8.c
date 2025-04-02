#include<stdio.h>
int main(){
int a=5,b=10,*p1=&a,*p2=&b;
printf("%d",*(p1+p2-p1));
}
