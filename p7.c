#include <stdio.h>
int main(){
int a[3]={1,2,3};
int *p=a+1;
*p=*p+1;
printf("%d\n",*p);
}
