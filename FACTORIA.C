#include<stdio.h>
void main()
{
  int i,n,fact=1;
  clrscr();
  printf("enter a number to calculate its factorial \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  fact=fact*i;
  printf("Factorial of %d =%d \n",n,fact);
  getch();
  }