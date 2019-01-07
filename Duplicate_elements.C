#include<stdio.h>
void main()
{
  int n,i,j,a[10],count=0;
    clrscr();
   printf("enter how many value in array\n");
   scanf("%d",&n);
   printf("Enter value in ascending Order\n");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	     if(a[i]==a[j])
	     {
	       count++;
	     }
	  }
	}
   printf(" the count of dupicate numbers are  %d",count);
   getch();
  }