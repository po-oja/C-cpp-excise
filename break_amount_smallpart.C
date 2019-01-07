#include<stdio.h>
void main()
{
int amt,total;
clrscr();
printf("enter the amount:");
scanf("%d",&amt);
total=amt/100;
printf("total 100rs note are:%d\n",total);
amt=amt-(total*100);
total=amt/50;
printf("total 50rs note are:%d\n",total);
amt=amt-(total*50);
total=amt/10;
printf("total 10rs note are:%d\n",total);
amt=amt-(total*10);
getch();
}
