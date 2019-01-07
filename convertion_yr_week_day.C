#include<stdio.h>
void main()
{
int days,years,weeks;
clrscr();
printf("enter the number of days");
scanf("%d",&days);
years=days/365;
printf("years: %d\n",years);
weeks=(days % 365)/7;
printf("weeks: %d\n",weeks);
days=days-((years*365)+(weeks*7));
printf("days: %d\n",days);
getch();
}
