/*Demonstrate pointer arithmetic by incrementing and decrementing a pointer to an integer
array*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int position;
    printf("Enter the position to access");
    scanf("%d",&position);
    int *p=&arr[position];
    printf("%d\n",*(p++));
    printf("%d\n",*(++p));
    printf("%d\n",*(p++));
}
