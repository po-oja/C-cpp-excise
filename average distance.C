#include<stdio.h>
void main()
{
int a;
float b;
clrscr();
printf("total distance in km:");
scanf("%d",&a);
printf("total fuel spent in liters:");
scanf("%f",&b);
printf("avarage consumption is %f",a/b);
getch();
}