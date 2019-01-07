#include<stdio.h>
void main()
{
  int n,i;
  clrscr();
  printf("enter number to find its factor \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     if(n%i==0)
     {
	printf("The factor of %d is %d \n",n,i);
     }
  }
  getch();
}