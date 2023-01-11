//factorial of a number
#include<stdio.h>
void main()
{
int n,i=1,fac=1;
printf("enter the value of n");
scanf("%d", &n);
for( ;i<=n;i++)
{
fac=fac*i;
}
printf("the factorial is %d", fac);
}
