#include<stdio.h>
int main(){
    int a,b,c;
    printf("The value of a is =");
    scanf("%d",&a);
    printf("The value of b is =");
    scanf("%d",&b);
    printf("The value of c is =");
    scanf("%d",&c);

    int k,l,m;
    k=a*b/c;
    l=a/b*c;
    m=a+b*c;
    printf("The value of k is :%d\n",k);
    printf("The value of l is :%d\n",l);
    printf("The value of m is :%d\n",m);

    int z;
    z=a%5;
    printf("The value of z is :%d\n",z);
}