
#include<stdio.h>
int fib();
void main()
{
int j,n;
for(j=1;j<=7;j++)
{

printf("%d\t",fib());
}
}
int fib()
{
int a=0,b=1,c,n,i=3;
printf("enter the value of n");
scanf("%d",&n);
printf("%d %d", a,b);
while(i<=n)
{
int c=a+b;
return c;
a=b;
b=c;
}
i++;

}
