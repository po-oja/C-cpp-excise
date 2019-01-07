#include<stdio.h>
void main()
{
int sec,h,m,s;
clrscr();
printf("enter the seconds:");
scanf("%d",&sec);
h=(sec/3600);
printf("hour : %d\n",h);
m=(sec-(3600*h))/60;
printf("month : %d\n",m);
s=(sec-(3600*h)-(m*60));
printf("seconds:  %d\n",s);
getch();
}