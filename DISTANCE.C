#include<stdio.h>
void main()
{
int s1,s2,t1,t2,d;
clrscr();
printf("enter higher speed1 ");
scanf("%d",&s1);
printf("enter the highest time ");
scanf("%d",&t1);
printf("enter lower speed2");
scanf("%d",&s2);
printf("enter lower time2 ");
scanf("%d",&t2);
d=((s1*s2)*(t1+t2))/(s1-s2);
d=d/60;
printf("the total distance travelled is :%d",d);
getch();
}