#include<stdio.h>
void main()
{
float a,b,c;
int x,y,z;
printf("Enter two values");
scanf("%f %f", &a, &b);
c=a+b;
printf("addition is %f\n", c);
c=a-b;
printf("subtraction is %f\n", c);
c=a*b;
printf("multiplication is %f\n" ,c);
c=a/b;
printf("division is %f\n", c);
printf("enter two values");
scanf("%d %d", &x, &y);
z=x%y;
printf("percentile is %d\n", z);
}
