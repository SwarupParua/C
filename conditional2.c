#include<stdio.h>
int main()
{
    int a;
    printf("The value of a is:");
    scanf("%d",&a);
    if(a%2){
        printf("odd");
    }
    else{
        printf("even");
    }
}