#include<stdio.h>
void main()
{
  int n,i;
  clrscr();
  printf("Enter the table no");
  scanf("%d",&n);
  printf("\nEnter the range of %d table:",n);
  scanf("%d",&k);

  for(i=1;i<=k;i++)
  {
     printf("%d X %d = %d \n",n,i,n*i);
     //j++;
  }
  getch();
}