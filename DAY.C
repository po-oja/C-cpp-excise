#include<stdio.h>
void main()
{
int yr,month,date,lp,sum,res,a[]={1,4,4,0,2,5,0,3,6,1,4,6};
char* day[]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
clrscr();
printf("enter the date in dd/mm/yyyy format  :");
scanf("%d %d %d",&date,&month,&yr);
if(yr<1900||yr>2000|| month<1||month>12||date<1||date>31)
{
printf("enter the valid date");
}
yr=(yr%100);
lp=yr/4;
month=a[month-1];
sum=yr+lp+month+date;
res=sum%7;
if((month==1||month==4)&&(yr%4))
{
  res=res-1;
}
printf("the day is %s",day[res]);
getch();
}