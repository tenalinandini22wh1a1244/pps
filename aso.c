#include<stdio.h>
void main()
{
int a,b;
printf("enter two values");
scanf("%d %d", &a, &b);
printf("the sum is %d\n", b+=a);
printf("the difference is %d\n", b-=a);
printf("the product is %d\n", b*=a);
printf("the division is %d\n", b/=a);
}
