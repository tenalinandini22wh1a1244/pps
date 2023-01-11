//fibonacci sequence
#include<stdio.h>
void main()
{
int a=0,b=1,n,i=3,c;
printf("enter the value of n");
scanf("%d", &n);
printf("%d %d\n", a,b);
while(i<=n)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
i++;
}
}

