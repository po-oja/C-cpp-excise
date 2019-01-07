#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float area,perimeter;
clrscr();
printf("enter the value of radius");
scanf("%d",&r);
perimeter=2*3.142*r;
printf("perimeter of the circle =%f inches\n",perimeter);
area=3.142*r*r;
printf("area of the circle =%f inches\n",area);
getch();
}
