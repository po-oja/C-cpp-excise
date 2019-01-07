#include<stdio.h>
#include<conio.h>
void main()
{
int area,perimeter,w,h;
clrscr();
printf("Enter the value of width and height");
scanf("%d,%d",&w,&h);
perimeter=2*(h+w);
printf("perimeter of the rectangle=%d inches\n",perimeter);
area=h*w;
printf("area of the rectangle=%d inches\n",area);
getch();
}
