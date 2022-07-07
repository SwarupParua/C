#include<stdio.h>
int main()
{
    int x;
    printf("The value of x is:");
    scanf("%d",&x);
    printf("the last digit of the value is :%d",x%10);
}