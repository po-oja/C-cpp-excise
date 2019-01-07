#include<stdio.h>
void fact(int);
void main()
{
  int n;
  clrscr();
  printf("Enter the value of n \n ");
  scanf("%d",&n);
  fact(n);
  getch();
 }
 void fact(int a)
 {
   int t1=0,t2=1,next=0;
   next=t1+t2;
   printf("fibonacci series are \n");
   while(next<a)
   {
  printf(" %d \n",next);
   t1=t2;
   t2=next;
   next=t1+t2;
  }
 }