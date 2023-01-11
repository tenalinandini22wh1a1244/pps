#include<stdio.h>
#include<math.h>
void main()
{
float principle,rate,time,compoundinterest;
printf("enter the values of rate,time,principle");
scanf("%f %f %f", &principle, &rate, &time);
compoundinterest=principle*pow((1+rate/100),time);
printf("the compoundinterest is %f", compoundinterest);
}




