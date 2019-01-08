#include<stdio.h>
void main()
{
  int a,n;
  printf("Enter the number: \n");
  scanf("%d",&n);
  for(a=0; a<=n; a++)
  {
      if(n == a*a)
      {
	printf("\n Entered number is a perfect square \n");

      }
  }
  printf(" \n Entered number is not a perfect square number \n");
  getch();
}