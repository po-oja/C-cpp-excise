#include<stdio.h>
void main()
{
  int n,rem,sum=0,i;
  clrscr();
  printf("\n Enter the number \n");
  scanf("%d",&n);
  for(i=1;i<=(n-1);i++)
  {
     rem = n % i;
     if(rem == 0)
     {
       sum = sum + i;
     }
  }
  if(sum == n)
  printf("Enter number is perfect number \n");
  else
  printf("entered number is not perfect number \n");
  getch();
}