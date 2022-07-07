#include<stdio.h>
int main()
{
    int a,b;
    printf("The value of a is:");
    scanf("%d",&a);
    printf("The value of b is:");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swap value of a is :%d\n",a);
    printf("The swap value of b is :%d\n",b);
}