#include<stdio.h>
void main()
{
   int n,r,ncr;
   clrscr();
   printf("Enter the n and r values \n");
   scanf("%d %d",&n,&r);
   ncr=fact(n)/(fact(r)*fact(n-r));
   printf("The ncr of %d and %d is %d",n,r,ncr);
   getch();
}
int fact(int x)
{
  int i=1;
  while(x!=0)
  {
    i=i*x;
    x--;
  }
  return i;
}