#include<stdio.h>
int main(){
int a,b,c,d;
a = 0&0;
b = 0&1;
c = 1&0;
d = 1&1;
printf("The value of a is :%d\n",a);
printf("The value of b is :%d\n",b);
printf("The value of c is :%d\n",c);
printf("The value of d is :%d\n",d);
printf("\n");

int e,f,g,h;
e = 0|0;
f = 0|1;
g = 1|0;
h = 1|1;
printf("The value of e is :%d\n",e);
printf("The value of f is :%d\n",f);
printf("The value of g is :%d\n",g);
printf("The value of h is :%d\n",h);
printf("\n");

int i,j,k,l;
i = 0^0;
j = 0^1;
k = 1^0;
l = 1^1;
printf("The value of i is :%d\n",i);
printf("The value of j is :%d\n",j);
printf("The value of k is :%d\n",k);
printf("The value of l is :%d\n",l);
printf("\n");

int m,n;
//m = ~0;
//n = ~1;
//printf("The value of m is :\n",~1);
//printf("The value of n is :\n",~0);
m = 34 & 89;
printf("%d",m);
}