#include<stdio.h>
void main()
{
float w1,w2,p,q,results;
clrscr();
printf("weight of item1:");
scanf("%f",&w1);
printf("No of item1:");
scanf("%f",&p);
printf("weight of item2:");
scanf("%f",&w2);
printf("No of item2:");
scanf("%f",&q);
results=((w1*p)+(w2*q))/(p+q);
printf("avrage is=%f\n",results);
getch();
}