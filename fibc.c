#include<stdio.h>
int fib(int n)
{
if(n==0|n==1)
return n;
else
return(fib(n-1)+fib(n-2));
}
void main()
{
int n,i;
printf("enter n value");
scanf("%d", &n);
for(i=1;i<=n;i++)
printf("%d\t",fib(i));
}
